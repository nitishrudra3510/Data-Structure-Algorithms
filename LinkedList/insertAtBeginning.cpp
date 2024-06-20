#include<iostream>
using namespace std;

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

    void insertAtTail(int value) {
        Node* temp = new Node(value);
        if (size == 0) 
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int value) {
        Node* temp = new Node(value);
        if (size == 0) 
            head = tail = temp;
        else {
            temp->next = head;
            head = temp;
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

    ll.insertAtTail(10); // 10->NULL
    ll.display();
    ll.insertAtTail(20); // 10->20->NULL
    ll.display();
    ll.insertAtTail(30);  //10->20->30->NULL
    ll.insertAtTail(40); //10->20->30->40->NULL;
    ll.display();
    
    ll.insertAtHead(50); // 50->10->20->30->40->Null;
    ll.display();

    cout << "Size of the linked list: " << ll.getSize() << endl;
    return 0;
}
