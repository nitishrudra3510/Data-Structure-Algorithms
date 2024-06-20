// #include<iostream>
// using namespace std;
// int gfg(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"Gfg"<<endl;
//     gfg(n-1);
// }
// int main(){
//     int x;
//     cin>>x;
//     int y = gfg(x);
//     cout<<y;
// }

// #include<iostream>
// using namespace std;

// void gfg(int n) {
//     if (n == 0) {
//         return;  // Base condition to stop recursion
//     }
//     cout << "Gfg" << endl;
//     gfg(n - 1);  // Recursive call
// }

// int main() {
//     int x;
//     cin >> x;  // Input the number of times to print "Gfg"
//     gfg(x);    // Call the function
//     return 0;
// }




#include <iostream>
#include <string>

int convertFive(int n) {
    std::string x = std::to_string(n); // Convert integer to string
    int length = x.length(); // Get the length of the string
    
    // Iterate through each character in the string
    for (int i = 0; i < length; i++) {
        // If the character is '0', replace it with '5'
        if (x[i] == '0') {
            x[i] = '5';
        }
    }
    
    // Convert the modified string back to an integer
    int result = std::stoi(x);

    // Return the result
    return result;
}

// Main function to test the convertFive method
int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    
    int result = convertFive(n);
    
    std::cout << "The modified number is: " << result << std::endl;

    return 0;
}
