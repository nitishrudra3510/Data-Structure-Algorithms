#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *right, *left;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* SeachBST(Node *root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }

    //root->data > key
    else if(root->data > key){
        return SeachBST(root->left, key);
    }

    // root->data < key
    return SeachBST(root->right, key);


}
int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if(SeachBST(root, 5)==NULL){
        cout<<"SeachBST failed";

    }else{
        cout<<"SeachBST succeeded";
    }

    return 0;
}