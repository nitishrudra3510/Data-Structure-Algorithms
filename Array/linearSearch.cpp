#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }

    }

    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
1   cout<<linearSearch(arr, n, key);
    
}



// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int key){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the key to search for: ";
//     cin >> key;

//     int result = linearSearch(arr, n, key);
//     if(result == -1){
//         cout << "Key not found in the array.";
//     } else {
//         cout << "Key found at index: " << result;
//     }
//     return 0;
// }
