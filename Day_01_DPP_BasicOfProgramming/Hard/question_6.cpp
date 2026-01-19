//  question no.6

// ### **Write a program to input temperature in Celsius and convert it to Fahrenheit.**

// F = C * 9/5 + 32`

#include <iostream>
using namespace std;
int main (){
    int celsuis;
    cout<< "enter the value of celsuis";
    cin>>celsuis;
    double  farenheit = (celsuis * 9/5)+32;
    cout<< "farenheit is" << farenheit;
    return 0;
}