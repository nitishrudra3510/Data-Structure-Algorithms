/*
Calculate the product of all the elements in the given array.
*/

// #include<iostream>

// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     cout << "Enter the elements of the array: ";
//     int arr[size];

//     // Input
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }


  
//     //output array
//     int product = 1;
//     for(int i = 0; i < size; i++) {
//         product *= arr[i];
//     }
//     cout<<"product of  Elements : "<<product;
//     return 0;
// }




//Find the second largest element in the given Array in one pass.

// #include<iostream>
// #include<climits> // Include the header file for INT_MIN
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     cout << "Enter the elements of the array: ";
//     int arr[size];

//     // Input
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int max = INT_MIN;
//     int second_max = INT_MIN;

//     // Find the second maximum element in the array
//     for(int i = 0; i < size; i++) {
//         if(arr[i] > max) {
//             second_max = max;
//             max = arr[i];
//         } else if (arr[i] > second_max && arr[i] != max) {
//             second_max = arr[i];
//         }
//     }

//     // Check if second maximum is found or not
//     if (second_max == INT_MIN) {
//         cout << "No second maximum element found in the array." << endl;
//     } else {
//         cout << "Second maximum element in the array: " << second_max << endl;
//     }

//     return 0;
// }


//Find the minimum value out of all elements in the array.


#include<iostream>
#include<climits>
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
œ

  
    //output array
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(min>arr[i]){
            min=arr[i];
        }
    }cout<<min;

    return 0;
}


