#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int index;
    Stack(){
        index = -1;
    }
    void push(int val){
        if(index==sizeof(arr)/sizeof(arr[0])-1) cout<<"Stcak is full!";
        // if(index==4) cout<<"Stcak is full!";
        index++;
        arr[index] = val;
    }
    void pop(){
        if(index==-1) cout<<"Stcak is empty!";
        index--;
    }

    int top(){
        return arr[index];

    }
    int size(){
        return index+1;
    }

    void display(){
        for(int i=0; i<=index; i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<endl;
    // cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    
    //st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.display();
}