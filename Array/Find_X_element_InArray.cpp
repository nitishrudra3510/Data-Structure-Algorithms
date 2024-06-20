/*
Find the  element x in the array. Take array and x as input.

*/

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    //input
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    int x;
    cout<<"Enter the x element : ";
    cin>>x;

    //search

    // check mark  means boolean
    bool flag = false; //-> false means not found.
    for(int i = 0; i < 5; i++){
        if(arr[i] == x){
            flag = true;
        }
        
    }

    if(flag == true){
        cout<<"Present in the array : ";
    }
    else
        cout<<"404 not present in the array : ";
}