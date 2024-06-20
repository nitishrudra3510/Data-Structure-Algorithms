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

int main(){
    stack<int> st;
    cout<<st.size()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
   
    stack<int> gt;
    stack<int> rt;

    // // Empty st into gt
    // while(!st.empty()){
    //     gt.push(st.top());
    //     st.pop();
    // }

    // // Empty gt into rt
    // while(!gt.empty()){
    //     rt.push(gt.top());
    //     gt.pop();
    // }

    // // Empty rt into st
    // while(!rt.empty()){
    //     st.push(rt.top());
    //     rt.pop();
    // }
    print(st);
}
