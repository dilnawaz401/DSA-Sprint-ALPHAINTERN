#include<iostream>
using namespace std ;
    class student{
        public:
        string name;
        int rollno;
        string department;
        float cgpa;
    };

int main(){
    student jaishri ;
    jaishri.name="hello";
    jaishri.rollno = 112345;
    jaishri.cgpa=8.9;
    cout << jaishri.name << endl;
}