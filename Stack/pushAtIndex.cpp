#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    // Putting elements back from temp to st                                                                                          
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

void inseratBottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

void insertAtIndex(stack<int>& st, int index, int val){
    stack<int> temp;
    while(st.size()>index){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    cout<<st.size()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
   
    stack<int> gt;
    stack<int> rt;
    inseratBottom(st, 80);
    print(st);
    cout<<endl;
    insertAtIndex(st, 2, 70);
    print(st);


}
