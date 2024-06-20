#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=1; i<=n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;


};

void reverse(queue<int>& q){
    stack<int> st;

    // empty the queue into a stack
    while(!q.empty()){
        int x = q.front();
        q.pop();
        st.push(x);
    }

    // empty the stack into queue

    while(!st.empty()){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}
using namespace std;
int main(){
    queue<int> q;
    //push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    display(q);

    reverse(q);
    display(q);

}