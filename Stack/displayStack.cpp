#include<iostream>
#include<stack>
using namespace std;

void displayStack(stack<int> s) {
    // Create a temporary stack to hold elements temporarily
    stack<int> temp;

    // Copy elements from the original stack to the temporary stack while preserving order
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    // Display the contents of the stack
    cout << "Stack Contents: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        s.push(temp.top()); // Restore the original stack
        temp.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;

    // Push some elements into the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    // Display the contents of the stack
    displayStack(myStack);

    return 0;
}
