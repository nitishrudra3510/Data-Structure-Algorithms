#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,1); // size = 5, 1 is intilized 5 times in vectors;
    cout<<"Print a: ";
    for(int i:a){
        cout<<i<<" "<<endl;
    }

    vector<int> last(a); // create a new vector or last vector, vector of a nad all the element of the a vector to copy in last vector.
    cout<<"Print last: ";
    for(int i:a){
        cout<<i<<" "<<endl;     
    }


    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    v.resize(10);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    

    cout<<"Element at index numberr 2 : "<<v.at(2)<<endl;

    cout<<"Front : "<<v.front()<<endl;
    cout<<"Back : "<<v.back()<<endl;

    cout<<"Before pop : "<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    v.pop_back();
    cout<<"After pop : "<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }

    cout<<"Before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size : "<<endl;
    v.size();
}