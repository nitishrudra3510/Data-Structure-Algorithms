#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


class Stack {
public:
    Node* head;
    int size;
    int* arr; // Adding array to hold stack elements
    int index; // Index to keep track of top element
    
    Stack() {
        head = NULL;
        size = 0;
        arr = new int[100]; // Creating an array of size 100
        index = -1; // Initialize index to -1
    }

    void push(int val) {
        if (index == 99) // Check if stack is full
            cout << "Stack is full!" << endl;
        else {
            index++;
            arr[index] = val; // Add value to stack
        }
    }

    void pop() {
        if (index == -1) // Check if stack is empty
            cout << "Stack is empty!" << endl;
        else
            index--; // Decrement index to remove top element
    }

    int top() {
        if (index == -1) { // Check if stack is empty
            cout << "Stack is empty!" << endl;
            return -1; // Return some default value indicating empty stack
        }
        return arr[index]; // Return top element
    }

    int getSize() {
        return index + 1; // Return size of stack
    }

    void display() {
        if (index == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i = 0; i <= index; i++) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack elements:" << endl;
    stack.display();

    cout << "Top element: " << stack.top() << endl;

    stack.pop();
    cout << "After popping one element:" << endl;
    stack.display();

    return 0;
};