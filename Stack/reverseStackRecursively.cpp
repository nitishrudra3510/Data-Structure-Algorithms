#include<iostream>
#include<stack>
using namespace std;
// using recursion 
void displayRev(stack<int> st){
    if(st.size()==0) return; 
    int x = st.top();
    cout<<x<<" ";

    st.pop();
    displayRev(st);
    st.push(x);

}
void display(stack<int> st){
    if(st.size()==0) return; 
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);

}

int main(){
    stack<int> st;
    cout<<st.size()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st); // normal stack;
    cout<<endl;
    displayRev(st);
   


}
