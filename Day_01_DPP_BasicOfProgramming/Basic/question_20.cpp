//question no. 20

// Write a program to input three integers a, b, c and print the value of the expression:**

// a + b * c - (++b)`

#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<< "enter the value ";
    cin>>a ;
    cout<< "enter the value ";
    cin>>b;
    cout<< "enter the value ";
    cin>>c;
    cout << a+b*c-(++b);
    return 0;
}
