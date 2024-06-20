#include<iostream>
using namespace std;
// insert At the End...
class Node { // linked list node
public:
    int val;
    Node* next;

    Node(int value) {
        this->val = value;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int value) {
        Node* temp = new Node(value);
        if (size == 0) 
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }
};

int main() {
    LinkedList ll;

    ll.insertAtEnd(10); // 10->NULL
    ll.display();
    ll.insertAtEnd(20); // 10->20->NULL
    ll.display();
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    cout << "Size of the linked list: " << ll.getSize() << endl;

    return 0;
}
