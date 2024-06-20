// #include<iostream>
// using namespace std;
// void deleteElement(int arr[], int &size, int index){
//     if(index<0 || index>=size){
//         cout<<"Invalid index for deletion."<<endl;
//         return;
//     }

//     for(int i=index; i<size-1; i++){
//         arr[i] = arr[i+1];
//     }

//     size--;

    
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size = 5;

//     deleteElement(arr, size, 4);

//     cout<<"Array after deletion: ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
void deleteElement(int arr[], int &size, int index){
    if(index<0 || index>=size){
        cout<<"Invalid index for deletion."<<endl;
        return;
    }

    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }

    size--;
    
    
}
int main(){
    // int arr[]={1,2,3,4,5};
    // int size = 5;

    int size;
    cout<<"ENTER THE SIZE : ";
    cin>>size;
    int arr[size];
    cout<<"ENTER THE ELEMENT : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    int n;
    cout<<" Element delete on which index : ";
    cin>>n;
    deleteElement(arr, size, n);

    cout<<"Array after deletion: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}