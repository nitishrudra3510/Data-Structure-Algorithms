#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "Top element: " << pq.top() << endl;
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;
    return 0;
}
