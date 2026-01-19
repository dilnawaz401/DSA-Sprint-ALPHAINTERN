// Write a program to input two times (hours and minutes separately) and calculate total minutes.

// question no. 12


// Write a program to input two times (hours and minutes separately) and calculate total minutes.



#include <iostream>
using namespace std ;
int main (){
    int a,b;
    cout <<"enter the value of a"<< endl;
    cin >>a;
    cout <<"enter the value of b"<< endl;
    cin >>b;
    cout << a/60 << "hour"<< endl;
    cout << b%60 << "min" << endl;
    cout << "total min=" << a+b << endl;
    return 0;

}