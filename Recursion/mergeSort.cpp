#include<iostream>
using namespace std;

void merge(int *arr, int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    for (int i = 0; i < len1; i++) {
        first[i] = arr[start + i];
    }

    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = start;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first[] and second[], if any
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;

        //     // left part sort karna hai..
        mergeSort(arr, start, mid);

        //     // right part sort karna hai
        mergeSort(arr, mid + 1, end);

        //merge
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[5] = {2, 32, 1, 332, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    // Printing sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
