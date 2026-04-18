





// #include<iostream>
// using namespace std;
// class Student {
//     public:
//          string name;
//          int rollno;
//          string department ;
//            Student(string n, int rno, string d){
//             name=n;
//             rollno=rno;
//             department=d;

//          }

//          Student(string d,string n , int rno){
//             name = n;
//             rollno=rno;
//             department=d;
//          }

//          Student(string n, int rno){
//             name = n;
//             rollno = rno;
          
//          }

// };


// void print(Student s ){
//     cout << s.name << " " << s.rollno << " " << s.department << endl;
// }

// int main(){
//     // Student s1;
//     // s1.name=" jaishri";
//     // s1.rollno= 1296;
//     // s1.department = "AIML";

//     Student s1("jaishri", 11234,"AIML");
//     Student s2("alex", 12345);
//     Student s3("AIML","hgjh", 12349);
//     s2.name="john";
//     s2.department = "AIML";
//     print(s1);
//     print(s2);

//     // copy constructor 

//     // Student s4=s1;
//     // print (s4);


//     Student s5(s1);
//     print (s1);

// }
















// // parameterised constructor 

// #include<iostream>
// using namespace std;
// class Student {
//     public:
//          string name;
//          int rollno;
//          string department ;
//            Student(string n, int rno, string d){
//             name=n;
//             rollno=rno;
//             department=d;

//          }

//          Student(string d,string n , int rno){
//             name = n;
//             rollno=rno;
//             department=d;
//          }

// };


// void print(Student s ){
//     cout << s.name << " " << s.rollno << " " << s.department << endl;
// }

// int main(){
  
//     Student s1("jaishri", 11234,"AIML");
    
   
    
//     print(s1);
  


// }











// // default constructor






// #include<iostream>
// using namespace std;

// class Student {
//     public:
//         string name;
//         int rollno;
//         string department;

//         Student(){
//         }
// };

// void print(Student s){
//     cout << s.name << " " << s.rollno << " " << s.department << endl;
// }

// int main(){
//     Student s1;

//     s1.name = "jaishri";
//     s1.rollno = 1296;
//     s1.department = "AIML";

//     print(s1);

//     return 0;
// }








// both parameterised  and  default constructor











// #include<iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int rollno;
//     string department;

//     // Default constructor
//     Student(){
//         name = "";
//         rollno = 0;
//         department = "";
//     }

//     // Parameterized constructor
//     Student(string n, int rno, string d){
//         name = n;
//         rollno = rno;
//         department = d;
//     }
// };

// void print(Student s){
//     cout << s.name << " " << s.rollno << " " << s.department << endl;
// }

// int main(){
//     // Using default constructor
//     Student s1;
//     s1.name = "jaishri";
//     s1.rollno = 1296;
//     s1.department = "AIML";

//     print(s1);

//     // Using parameterized constructor
//     Student s2("riya", 11234, "CSE");

//     print(s2);

//     return 0;
// }















// copy constructor









// #include<iostream>
// using namespace std;
// class Student {
//     public:
//          string name;
//          int rollno;
//          string department ;
//            Student(string n, int rno, string d){
//             name=n;
//             rollno=rno;
//             department=d;

//          }

//          Student(string d,string n , int rno){
//             name = n;
//             rollno=rno;
//             department=d;
//          }

//          Student(string n, int rno){
//             name = n;
//             rollno = rno;
          
//          }

// };


// void print(Student s ){
//     cout << s.name << " " << s.rollno << " " << s.department << endl;
// }

// int main(){
    

//     Student s1("jaishri", 11234,"AIML");
//     Student s2("alex", 12345);
//     Student s3("AIML","hgjh", 12349);
 
 

//     // copy constructor 
//     // 2 method to print 
    
//     // 1st
//     Student s4=s1;
//     print (s4);

//     // 2nd 
//     // Student s5(s1);
//     // print (s1);

//     print(s2);
//     print(s3);
//     print(s4);

// }