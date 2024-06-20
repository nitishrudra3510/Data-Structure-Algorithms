// #include<iostream>
// using namespace std;
// class Node{  // linked list node
//     public:
//         int val;
//         Node* next;

//         Node(int value){
//             this->val = value;
//             this->next = NULL;
//         }
// };
// int main(){
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);

//     a-> next = b;
//     b->next = c;
//     c->next = d;    

//     cout<<a->next->next->val<<endl;;  // the vaLUE OF c;
//     cout<<a->next->next->next->val<<endl;
//     Node* temp = a;

//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }



// create display function for prrint all the values;

#include<iostream>
using namespace std;
class Node{  // linked list node
    public:
        int val;
        Node* next;

        Node(int value){
            this->val = value;
            this->next = NULL;
        }
};

void display(Node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

// return size of node class;
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;

}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a-> next = b;
    b->next = c;
    c->next = d;    
    d->next = e;
    display(a);
}

