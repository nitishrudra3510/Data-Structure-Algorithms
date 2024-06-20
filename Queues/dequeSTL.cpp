#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    cout << "Front element: " << dq.front() << endl;
    cout << "Rear element: " << dq.back() << endl;

    dq.pop_back(); // remove the element of back from the queue

    cout<<"Rear element after pop : "<<dq.back() << endl;

    return 0;
}