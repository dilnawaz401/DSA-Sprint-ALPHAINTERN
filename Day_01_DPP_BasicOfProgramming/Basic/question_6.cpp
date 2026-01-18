
//queston no. 6


// Write a program to input two numbers and print the remainder when the first number is divided by the second.


// modulus 

#include <iostream>
using namespace std;
int main(){
    int a,b;
   
    cout<< "enter the value of  a ";
    cin>> a;
    
    cout<< "enter the value of b ";
     cin>> b;
    int c= a%b;
    if (a%b==0){
        
        cout<<"a is divisible by b = "<<" " <<c << endl;
    }
    else{
        cout<< "not divisible =" << c << endl;

    }
    return 0;
}

// didvide 

#include <iostream>
using namespace std;
int main(){
    int a,b;
   
    cout<< "enter the value of  a ";
    cin>> a;
    
    cout<< "enter the value of b ";
     cin>> b;
    int c= a/b;
    if (a/b==0){
        
        cout<<"a is divisible by b = "<<" " <<c << endl;
    }
    else{
        cout<< "not divisible =" << c << endl;

    }
    return 0;
}