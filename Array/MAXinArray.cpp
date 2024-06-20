#include<iostream>
using namespace std;
int main(){
    int arr[5];
    //input
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0; i<5; i++){
       if(arr[i]>max){
            max = arr[i];
       }
    }

    cout<<max<<endl;
}