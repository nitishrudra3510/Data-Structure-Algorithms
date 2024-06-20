
#include<iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    int arr[size];

    // Input
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }


    int x;
    cout<<" Enter the x no: ";
    cin>>x;
    int count= 0;
    //output array
    for(int i = 0; i < size; i++) {
        if(arr[i] > x) {
            count++;
        }
    }
    cout<<"Count Elements : "<<count;
    return 0;
}
