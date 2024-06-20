// #include<iostream>
// using namespace std;
// void hanoi(int n, char s, char h, char d){
//     if(n==0) return;
//     hanoi(n-1, s, d, h);
//     cout<<s<<" -> "<<d<<endl;
//     hanoi(n-1, h, s, d);
// }
// int main(){
//     int n =3;
//     hanoi(n, 'A','B','C');
// }

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    cout << "Steps to solve the Tower of Hanoi problem with " << numDisks << " disks:\n";
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    return 0;
}
