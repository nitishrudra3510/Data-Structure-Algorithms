#include<iostream>
#include<queue>
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
using namespace std;
int main(){
    queue<int> q;
    //push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    display(q);

    q.pop();
    display(q);

}