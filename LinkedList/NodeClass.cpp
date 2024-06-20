// creating of a linked list->  data|address

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int val;
//         Node* next;
// };
// int main(){
//     // 10 20 30 40

//     // assign the value in the nodes;
//     Node a;
//     a.val = 10;
//     Node b;
//     b.val = 20;
//     Node c;
//     c.val = 30;
//     Node d;
//     d.val = 40;

//     // forming linked list;-> with the help of the address.

//     // here assign the address of the values ;
//     a.next= &b; // the address of the b;
//     b.next= &c; // the address of the c;
//     c.next= &d; // the address of the d
//     d.next = NULL; // the null pointer has not assigned any value address;



// }


// using constructor;


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
//     // 10 20 30 40

//     // assign the value in the nodes;
//     // uper bhi assign kiya hua values node me sahi hai or ye bhi sahi
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);


//     // forming linked list;
//     cout<<&a<<endl;
//     //cout<<a.next; //0x0


//     //-> agar the constructor me assign kar diye(this->next=NULL) haio null pointer then yeha pr assign karne ki jarut nahi hai
//     //  a.next=NULL;
//     //  b.next=NULL;
//     //  c.next=NULL;
//     //  d.next=NULL;

//     a.next= &b; // the address of the b;
//     b.next= &c; // the address of the c;
//     c.next= &d; // the address of the d

//     //d.next = NULL; // the null pointer has not assigned any value address;
    
//     //print the value of b.
//     cout<<(a.next)->val<<endl;
//     //cout<<(*(a.next)).val<<endl;
//     //Node* ptr = &b;
//     // ptr->val = 60;
//     // cout<<b.val;

//     // print the value of c.
//     cout<<((a.next)->next)->val;
// }



// print the all values using while loops.
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
//     // 10 20 30 40

//     // assign the value in the nodes;
//     // uper bhi assign kiya hua values node me sahi hai or ye bhi sahi
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);


//     // forming linked list;
//     cout<<&a<<endl;
//     //cout<<a.next; //0x0

//     a.next= &b; // the address of the b;
//     b.next= &c; // the address of the c;
//     c.next= &d; // the address of the d

//     //print the value of b.
//     cout<<(a.next)->val<<endl;
//     //cout<<(*(a.next)).val<<endl;
    
//     // print the value of c.
//     //cout<<((a.next)->next)->val;

//     // print the value of a,B,C
//     // Node temp = a;
//     // while(temp.next!=NULL){
//     //     cout<<temp.val<<" ";
//     //     temp = *(temp.next); // temp.next = b; // *(temp.next) = c
//     // }

//     //PRINT THE ALL VALUES;

//     Node temp = a;
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next==NULL) break;
//             temp = *(temp.next); // temp.next = b; // *(temp.next) = c
        
       
//     }
// }

