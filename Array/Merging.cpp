#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements of both arrays while maintaining sorted order
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;
    cout << "Enter the size of first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter the elements of first array in sorted order: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter the elements of second array in sorted order: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Calculate the size of the result array
    int resultSize = size1 + size2;
    int result[resultSize];

    // Merge the two arrays
    mergeArrays(arr1, size1, arr2, size2, result);

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
