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

    void deleteAtHead(){
        if(size == 0){
            cout<<"List is empty";
        }
        head = head->next;
        size--;
    }

    void deleteAtIndex(int index){
        if(index==0){
            cout<<"List is empty";
            return;
        }
        if(index <0|| index>=size){
            cout<<"Index out of range";
            return;
        }

        else if(index==0){
            return deleteAtHead();
        }

        else{
            Node* temp = head;
            for(int i=1; i<=index-1; i++){
                temp = temp->next;
            }
            temp-> next = temp->next->next;
               
            size--;
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
    ll.deleteAtHead();
    ll.display();

    ll.deleteAtIndex(2);
    ll.display();
    return 0;
}
