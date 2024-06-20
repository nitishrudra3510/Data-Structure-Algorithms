#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << arr << endl; //0x16d043074 -> &arr[0]=arr
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    /*
    0x16b587074
0x16b587078
0x16b58707c
0x16b587080
0x16b587084
    */
}