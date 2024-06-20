// #include<iostream>
// using namespace std;
// class Students{  // user defined data types.
//     public:
//         string name;
//         int rollno;
//         float marks;


//         Students(string n, int ro, int mark){
//             name = n;
//             rollno  = ro;
//             marks = mark;
//         }

// };
// int main(){
//     Students students("nitish", 76, 92.66);
//     // students.name = "Student";
//     // students.rollno = 46;

//     cout<<students.name;

// }



// this keyword is acess the current varibles
#include<iostream>
using namespace std;
class Students{
    public:
        string name;
        int rollno;
        float marks;


        Students(string name, int rollno, int marks){
            this->name = name; //
            this->rollno  = rollno;
            this->marks = marks;
        }

};
void change(Students students){
    students.name = "Nitish";
}
int main(){
    Students students("nitish", 76, 92.66);
    cout<<students.name<<endl;
    change(students);

    cout<<students.name<<endl;



}