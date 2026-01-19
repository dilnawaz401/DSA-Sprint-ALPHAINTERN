// question no.2

// Write a program to input a 2-digit number and print the reversed number.

// using 53


#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a 2-digit number ";
    cin >> num;
    while(num>0){
    reversed = (reversed * 10)+ (num%10);
    num = num/ 10;
    }
    cout << "Reversed number: " << reversed;
    return 0;
}