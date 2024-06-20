#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // int counter = 1;
    // while(counter < n) {
    //     for(int i = 0; i < n - counter; i++) {
    //         if(arr[i] > arr[i + 1]) {
    //             int temp = arr[i];
    //             arr[i] = arr[i + 1];
    //             arr[i + 1] = temp;
    //         } 
    //     }

    //     counter++;
    // }

    //bubble sort;
    for(int i = 0; i < n-1; i++) {
        // traveersal
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }

    cout << "Bubble sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
