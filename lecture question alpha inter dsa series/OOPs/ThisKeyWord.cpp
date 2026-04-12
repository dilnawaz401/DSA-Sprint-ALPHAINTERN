#include<iostream>
using namespace std ;
class Person{
    public:
         string name ;
         int age ;
         Person (string n, int a){
            this->name = name;
            this->age = age;

         }
};

int main(){
    Person p1("jaya" , 21);
    Person p2("jaishri", 23);
    cout<<p1.age<< " " << p1.name;
}