





#include<iostream>
using namespace std ;
int main(){
    int x=4;
    cout<<&x<<endl;
    int *p=&x;
    cout<<*p<<endl;
    *p=100;
    cout<<*p<<endl;
}

























#include<iostream>
using namespace std ;
class Person{
    public:
         string name ;
         int age ;
         Person (string name, int age){
            this->name = name;
            this->age = age;
         

         }
        
};


int main(){

    Person p1("jaya" , 21);
    Person* a=&p1;
   
    cout<<(*a).name<<" ";
   
    //cout<<(*a).age;
    (*a).age=70;
    cout<<(*a).age<<" ";


}








#include<iostream>
using namespace std ;
class Person{
    public:
         string name ;
         int age ;
         Person (string name, int age){
            this->name = name;
            this->age = age;
         

         }
        
};
void change (Person p){
    p.age=56;
}

int main(){
    Person p1("zoya",21);
    cout<<p1.age<<" "<<p1.name;

}


