#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl; // 10 20 30 40

    // st.pop();//
    // cout<<st.size()<<endl; // top elements will deleted // 10 20 30

    // cout<<st.top(); // print the top elements


    // print the reversed order elements
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // cout<<st.top()<<endl;

    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    

// putting elements back from temp to st;
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();   
    }   

    
}