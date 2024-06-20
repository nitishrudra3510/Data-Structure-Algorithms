#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1, 25, 6,323, 7};
    int n;
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minIndex = -1;
        for(int j = i; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    cout << "Selection sorted: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
