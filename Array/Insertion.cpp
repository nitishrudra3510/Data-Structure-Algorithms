#include<iostream>
using namespace std;
void innsertElement(int arr[], int &size, int index, int value){
    if(index<0 || index>size){
        cout<<"Invalid index for insertion."<<endl;
        return;
    }

    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=value;
    size++;
}

int main(){
    const int capacity = 10;
    int arr[capacity]= {0,1,2,3,4,5,6,7};
    int size = 5;

    innsertElement(arr, size, 2, 10);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;


}