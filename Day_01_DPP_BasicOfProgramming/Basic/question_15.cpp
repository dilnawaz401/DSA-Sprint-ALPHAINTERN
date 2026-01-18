// question no. 15

// ### **15. Write a program to input two float numbers and print:**

// - sum
// - difference
// - product
// - division

#include <iostream>
using namespace std;
int main(){

    float a,b;
    cout<<"enter the value of a";
    cin>>a;

    cout<< "enter the value of b";
    cin>>b;
    cout << "sum ="<<a+b<<endl;
    cout << "substract ="<<a-b<<endl;
    cout << "multiply ="<<a*b<<endl;
    cout << "divvision ="<<a/b<<endl;
    return 0;
}