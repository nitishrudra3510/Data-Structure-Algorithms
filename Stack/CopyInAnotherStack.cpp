#include<iostream>
#include<stack>
using namespace std;

void copyStack(stack<int>& original, stack<int>& destination) {
    stack<int> temp; // Temporary stack

    // Copy elements from original stack to temporary stack while preserving order
    while (!original.empty()) {
        temp.push(original.top());
        original.pop();
    }

    // Copy elements from temporary stack to destination stack while preserving order
    while (!temp.empty()) {
        destination.push(temp.top());
        original.push(temp.top()); // Restoring original stack
        temp.pop();
    }
}

int main() {
    stack<int> originalStack;
    originalStack.push(10);
    originalStack.push(20);
    originalStack.push(30);
    originalStack.push(40);
    cout<<originalStack.top()<<endl;
    stack<int> copiedStack;

    // Copy contents of originalStack to copiedStack
    copyStack(originalStack, copiedStack);

    // Print contents of copiedStack
    cout << "Contents of copiedStack: ";
    while (!copiedStack.empty()) {
        cout << copiedStack.top() << " ";
        copiedStack.pop();
    }
    cout << endl;

    return 0;
}
