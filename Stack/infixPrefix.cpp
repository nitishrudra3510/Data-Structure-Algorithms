#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int prec(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

string infixToPrefix(string s) {
    reverse(s.begin(), s.end());
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++) {
        // Check if the character is an operand
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            res += s[i];  // Append operand to the result string
        } else if (s[i] == '(') {
            st.push(s[i]);  // Push '(' onto the stack
        } else if (s[i] == ')') {
            // Pop operators from the stack until '(' is encountered
            while (!st.empty() && st.top() != '(') {
                res += st.top();  // Append operator to the result string
                st.pop();         // Pop the operator from the stack
            }
            if (!st.empty()) {
                st.pop();  // Pop '(' from the stack
            }
        } else {
            // If the character is an operator
            while (!st.empty() && prec(st.top()) >= prec(s[i])) {
                res += st.top();  // Append operator to the result string
                st.pop();         // Pop the operator from the stack
            }
            st.push(s[i]);  // Push the current operator onto the stack
        }
    }

    // Append any remaining operators on the stack to the result string
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());  // Reverse the result string to get the prefix expression
    return res;
}


int main() {
    cout << infixToPrefix("(a-b/c)*(a/k-l)") << endl; //-(a-/b/c*akl
    return 0;
}
