//question no. 4


//  Write a program to input a character and print its ASCII value.


// a = 97  z = 122
// A = 65  Z = 90

#include <iostream>
using namespace std;
int main(){
    char alphabet;
    cout << "Enter a character: ";
    cin >> alphabet;
    cout << "ASCII value of alphabate is " << (int)alphabet;
    return 0;
    }