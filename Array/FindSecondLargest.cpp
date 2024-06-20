// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size: ";
//     cin>>size;

//     cout<<" Enter the number of array : ";
//     int arr[size];
//     //input
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     // int max = arr[0];
//     int max = INT_MIN;
//     for(int i=0; i<size; i++){
//        if(arr[i]>max){
//             max = arr[i];
//        }
//     }

//     int second_max = INT_MIN;
//     for(int i=0; i<size; i++){
//         if(arr[i]!=max && arr[i]>second_max){
//             second_max = arr[i];
//         }
//     }
//     cout<<second_max<<endl;
// }

#include<iostream>
#include<climits> // Include the header file for INT_MIN
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

    int max = INT_MIN;
    int second_max = INT_MIN;

    // Find the maximum element in the array
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the second maximum element in the array
    for(int i = 0; i < size; i++) {
        if(arr[i] != max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }

    cout << "Second maximum element in the array: " << second_max << endl;

    return 0;
}
