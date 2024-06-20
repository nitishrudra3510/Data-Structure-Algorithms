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

class DLL {
    Node* head;
    Node* tail;
    int size;

public:
    DLL() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int value) {
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

    void insertAtHead(int value) {
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

    void insertAtindex(int index, int value) {
        if (index < 0 || index > size) {
            cout << "Invalid index: " << endl;
        } else if (index == 0)
            insertAtHead(value);
        else if (index == size)
            insertAtEnd(value);
        else {
            Node* t = new Node(value);
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) {
                temp = temp->next;
            }

            t->next = temp->next;
            temp->next->prev = t;
            temp->next = t;
            t->prev = temp;
            size++;
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

    void deleteAtHead() {
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

    void deleteAtTail() {
        if (size == 0) {
            cout << "List is empty list";
        } else if (size == 1) {
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int index) {
        if (index == 0) {
            cout << "List is empty";
            return;
        }
        if (index < 0 || index >= size) {
            cout << "Index out of range";
            return;
        }

        else if (index == 0) {
            return deleteAtHead();
        } else if (index == size - 1) {
            return deleteAtTail();
        }

        else {
            Node* temp = head;
            for (int i = 1; i <= index - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }

    int getAtIndex(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index";
            return -1;
        } else if (index == 0) {
            return head->val;
        } else if (index == size - 1)
            return tail->val;

        else {
            if (index < size/2) {
                Node* temp = head;
                for (int i = 0; i < index ; i++) {
                    temp = temp->next;
                }
                return temp->val;
            }

            else {
                Node* temp = tail;
                for (int i = size - 1; i > index; i--) {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }
};

int main() {
    DLL list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();

    list.insertAtEnd(40);
    list.display();

    list.insertAtHead(5);
    list.display();

    list.insertAtindex(2, 50);
    list.display();

    list.deleteAtHead(); //
    list.display(); // 10 50 20 30 40

    list.deleteAtTail();
    list.display(); // 10 50 20 30;

    list.deleteAtIndex(3);
    list.display();

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.display();

    list.getAtIndex(2);
    list.display();
}
