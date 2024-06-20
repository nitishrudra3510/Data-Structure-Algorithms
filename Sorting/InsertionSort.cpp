// // #include<iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     int arr[n];
// //     for(int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }

// //     for(int i = 1; i < n; i++) {
// //         int temp = arr[i];
// //         int j = i - 1; // Added missing semicolon here
// //         for(; j >= 0; j--) {
// //             if(arr[j] > temp) {
// //                 arr[j + 1] = arr[j];
// //             } 
// //             else {
// //                 break;
// //             }
// //         }
// //         arr[j + 1] = temp;
// //     }

// //     cout << "Sorted array: ";
// //     for(int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;

// //     return 0;
// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=1; i<n; i++){
//         cin>>arr[i];
//     }
//     //insertion
//     // for(int i=1; i<n; i++){
//     //     int temp = arr[i];
//     //     int j=i-1;
//     //     for(;j>=0; j--){
//     //         if(arr[j]>temp){
//     //             arr[j+1]=arr[i];
//     //         }

//     //         else{
//     //             break;
//     //         }
//     //     }
//     //     arr[j+1]=temp;
 

//     // }

//     // insertion
//     for(int i=0; i<n ; i++){
//         int j=i;
//         while(j>=1 && arr[j]<<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
//     cout<<"Sorted Array : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<endl;
//     }

//     cout<<endl;

// }


#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Perform insertion sort
    insertionSort(arr, size);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
