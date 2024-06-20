#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention the size
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}