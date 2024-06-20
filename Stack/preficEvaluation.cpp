#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prefixEvaluation(string s){  // s as take input and return integer..
    stack<int> st;

    for(int i=s.length()-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9'){  //This line checks if the current character is a digit.
            st.push(s[i]-'0'); // If the current character is a digit, it converts it to an integer and pushes it onto the stack.
        }
        else{
            int op1 = st.top();
            st.pop();

            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;

            case '-':
                st.push(op1-op2);
                break;

            case '*':
                st.push(op1*op2);
                break;
            
            case '/':
                st.push(op1/op2);
                break;
            
            case '^':

                st.push(pow(op1, op2));
                break;
            
            }
        }
    }
    return st.top();
}
int main(){

    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;

}