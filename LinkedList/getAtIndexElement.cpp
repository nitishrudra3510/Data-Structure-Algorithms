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

    void insertAtindex(int index, int value) {
        if(index<0 || index>size){
            cout<<"Invalid index: "<<endl;
        }
        else if(index==0) insertAtHead(value);
        else if(index==size) insertAtTail(value);

        else{
            Node* t = new Node(value);
            Node* temp = head;
            for(int i =0; i<index-1; i++){
                temp=temp->next;
            }

            t->next=temp->next;
            temp->next=t;
            size++;

        }
    }

    int getAtIndex(int index){
        if(index<0 || index>=size){ // Corrected condition to index>=size
            cout<<"Invalid index";
            return -1; // Added return statement to handle invalid index
        }
        else if(index==0){
            return head->val; // Changed value to val
        }
        else if(index==size-1) return tail->val; // Changed value to val

        else{
            Node* temp = head;
            for(int i=0; i<index; i++){ // Corrected loop condition to i<index
                temp = temp->next;
            }

            return temp->val; // Changed value to val
        }
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

    ll.insertAtindex(3,38);
    ll.display();

     cout << "Value at index 3: " << ll.getAtIndex(3) << endl;
    return 0;
}
