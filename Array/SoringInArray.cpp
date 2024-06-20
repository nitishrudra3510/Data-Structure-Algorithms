// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n-1; i++){
//          for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//          }
//     }


//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";

      
//     }
// }



#include<iostream>
#include<algorithm>
using namespace std;
void sortArray(int arr[], int &size){
    sort(arr, arr+size);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int size = sizeof(arr)/sizeof(arr[1]);

    sortArray(arr, size);
    cout<<"Sorted Array : ";

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}