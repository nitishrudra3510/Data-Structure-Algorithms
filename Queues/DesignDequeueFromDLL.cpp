#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int value) {
        this->val = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Dequeu { //user defined DATA structure
    Node* head;
    Node* tail;
    int size;

public:
    Dequeu() {
        head = tail = NULL;
        size = 0;
    }

    void push_back(int value) {
        Node* temp = new Node(value);
        if (size == 0)
            head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void push_front(int value) {
        Node* temp = new Node(value);
        if (size == 0)
            head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    
    void pop_Front() {
        if (size == 0) {
            cout << "List is empty";
        }
        head = head->next;
        if (head == NULL)
            tail = NULL;
        if (head != NULL)
            head->prev = NULL;
        size--;
    }

    int getSize() {
        return size;
    }

    void pop_BAck() {
        if (size == 0) {
            cout << "List is empty list";
        } else if (size == 1) {
            pop_Front();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    int front(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }

        return head->val;
        
    }

    int back(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }

        return tail->val;
    }

    

    
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Dequeu dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.display();

    dq.pop_BAck();

    dq.display();
    dq.push_front(50);

    dq.display();

    cout<<dq.front()<<endl;

    cout<<dq.back()<<endl;
}
