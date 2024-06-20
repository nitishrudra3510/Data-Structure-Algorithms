#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of the students : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the students marks : ";
    for(int i=0; i<n-1; i++){
        cin>>arr[i];

    }

    for(int i=0; i<n-1; i++){
        if(arr[i]<35){
            cout<<i<<" ";
    
        }
    }    
}