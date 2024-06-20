#include <iostream>
using namespace std;

void traversal(int arr[], int size){
    cout<<"Array size: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    traversal(arr,size);
    return 0;
}
