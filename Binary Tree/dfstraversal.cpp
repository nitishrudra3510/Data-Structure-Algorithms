#include<iostream>
using namespace std;
class Node{  // this is a treenode;
public:
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }

};

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" "; //root
    preorder(root->left);  // left
    preorder(root->right); // rigth

}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);  // left
    cout<<root->value<<" "; //root
    inorder(root->right); // right

}


void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);  // left
    postorder(root->right); // right
    cout<<root->value<<" "; //root

}


int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
 

    a->left = b;
    a->right = c;   
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

     
    postorder(a);
    cout<<endl;
    
    inorder(a);
    cout<<endl;

    postorder(a);
    cout<<endl;
}