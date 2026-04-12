#include<iostream>
using namespace std ;
class Student {
    public:
         string name;
         int rollno;
         string department ;

};

int main(){
    Student s1;
    s1.name=" jaishri";
    s1.rollno= 1296;
    s1.department = "AIML";


    Student s2;
    s2.name=" jaya";
    s2.rollno= 1297;
    s2.department = "AIML";


    
    Student s3;
    s3.name=" jai";
    s3.rollno= 1298;
    s3.department = "AIML";

    cout << s1.name<< " " << s1.rollno<< " " << s1.department << endl;
    cout << s2.name<< " " << s2.rollno<< " " << s2.department << endl;
    cout << s3.name<< " " << s3.rollno<< " " << s3.department << endl;


}













// 2nd code




#include<iostream>
using namespace std ;
class Student {
    public:
         string name;
         int rollno;
         string department ;

};

void print(Student s ){
    cout << s.name << " " << s.rollno << " " << s.department << endl;
}

int main(){
    Student s1;
    s1.name=" jaishri";
    s1.rollno= 1296;
    s1.department = "AIML";


    Student s2;
    s2.name=" jaya";
    s2.rollno= 1297;
    s2.department = "AIML";


    
    Student s3;
    s3.name=" jai";
    s3.rollno= 1298;
    s3.department = "AIML";


    print (s1);
    print (s2);
    print(s3);

}










// 3rd code






//4th code




#include<iostream>
using namespace std ;
class Student {
    public:
         string name;
         int rollno;
         string department ;

};

void print(Student s ){
    cout << s.name << " " << s.rollno << " " << s.department << endl;
  
}

void change (Student &s){
    s.name = "Alex";
    
}

int main(){


    Student s1;
    s1.name=" jaishri";
    s1.rollno= 1296;
    s1.department = "AIML";


    Student s2;
    s2.name=" jaya";
    s2.rollno= 1297;
    s2.department = "AIML";


    
    Student s3;
    s3.name=" jai";
    s3.rollno= 1298;
    s3.department = "AIML";


    print (s1);
    change (s1);
    print(s1);
 

}