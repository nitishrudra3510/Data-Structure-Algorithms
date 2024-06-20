#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pivotIndex = s+cnt;

    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j=e;

    while(i<pivotIndex && j> pivotIndex){
        while(arr[i]<pivot){
            i++;
        }

        while(arr[i]>pivot){
            j--;
        }

        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}
// Function to partition the array
// int partition(int arr[], int s, int e) {
//     int pivot = arr[s];
//     int cnt = 0;

//     for (int i = s + 1; i <= e; i++) {
//         if (arr[i] <= pivot) {
//             cnt++;
//         }
//     }

//     // Place the pivot at its right position
//     int pivotIndex = s + cnt;
//     swap(arr[pivotIndex], arr[s]);

//     // Rearrange the elements
//     int i = s;
//     int j = e;
//     while (i < pivotIndex && j > pivotIndex) {
//         while (arr[i] < pivot) {
//             i++;
//         }
//         while (arr[j] > pivot) {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIndex;
// }


// Function to perform Quick Sort
// void quickSort(int arr[], int s, int e) {
//     if (s >= e) {
//         return;
//     }
//     // Partition the array
//     int p = partition(arr, s, e);

//     // Recursively sort the left and right parts
//     quickSort(arr, s, p - 1);
//     quickSort(arr, p + 1, e);
// }

void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(arr, s,e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main() {
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
