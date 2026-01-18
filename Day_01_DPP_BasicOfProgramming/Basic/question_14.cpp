// question no. 14


// Write a program to input a character digit (‘5’) and convert it into its integer value using ASCII subtraction (c - '0').




#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a ch: ";
    cin >> ch;
    int value = ch - '0';
    cout << "Integer value: " << (int)value;
    return 0;
}
