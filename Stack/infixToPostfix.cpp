/*

Certainly! Let's consider the postfix expression "4 6 + 2 / 5 * 7 +":

If operand print:

Operands in the expression are '4', '6', '2', '5', and '7'. They are printed directly.
If '(' push to stack:

There are no opening parentheses in the expression, so this step doesn't apply.
If ')' pop from stack and print until '(' is found:

There are no parentheses in the expression, so this step doesn't apply.
If operator:

When '+' is encountered after '4' and '6', '4' and '6' are popped and added together, and the result '10' is pushed back onto the stack.
When '/' is encountered after '10' and '2', '10' and '2' are popped and divided, and the result '5' is pushed back onto the stack.
When '*' is encountered after '5' and '5', '5' and '5' are popped and multiplied, and the result '25' is pushed back onto the stack.
When '+' is encountered after '25' and '7', '25' and '7' are popped and added together, and the final result '32' is pushed back onto the stack.
So, after evaluating the postfix expression "4 6 + 2 / 5 * 7 +", the final result obtained is '32'.
*/

#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prec(char c){// for checking the current element ya curentl characters.
    if(c=='^'){
        return 3;
    }

    else if(c=='*' || c=='/'){
        return 2;
    }

    else if(c=='+' || c=='-'){
        return 1;

    }
    else{
        return -1;
    }

}
string infixToPostfix(string s){
    stack<> st;
    string result;
    for(int i =0; i<s.length(); i++){
        if((s[i]>= 'a' && s[i]<='z' ) || (s[i]>='A' && s[i]<'Z')){
            result+=s[i];
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                result+=st.top();
                st.top();
            }
            if(!st.empty()){
                st.pop();
            }
        }

        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                result+=st.top();
                st.top();
            }

            st.push(s[i]);
        }
    }

    while(!st.empty()){
        result+=st.top();
        st.top();
    }

    return result;
}
int main(){
    cout<<infixToPostfix("(a-b/c)*(a/k-l)");
    return 0; 
}
//(a-b/c)*(a/k-l);