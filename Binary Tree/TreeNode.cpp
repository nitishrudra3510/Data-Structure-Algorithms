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

void display(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    display(root->left);
    display(root->right);
}

int sum(Node* root){ // sum of trees; 
    if(root==NULL) return 0;
    int LST= sum(root->left);
    int RST= sum(root->right);
    int ans = root->value+LST+RST;
    return ans;
}

int size(Node* root){ // size of trees; 
    if(root==NULL) return 0;
    return 1+ size(root->left) + size(root->right);
}

int maxinTree(Node* root){ // max of trees; 
    if(root==NULL) return INT_MIN;
    // int lMax = maxinTree(root->left);
    // int Rmax = maxinTree(root->right);
    // return max(root->value, max(lMax, Rmax));
    return max(root->value, max(maxinTree(root->left), maxinTree(root->right)));
}

int LevelsTree(Node* root){ // levels of trees; 
    if(root==NULL) return 0;
    return 1+ max(LevelsTree(root->left), LevelsTree(root->right));
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(0);

    a->left = b;
    a->right = c;   
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->left = h;
     
    display(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<maxinTree(a);

    cout<<endl;
    cout<<LevelsTree(a);
}
