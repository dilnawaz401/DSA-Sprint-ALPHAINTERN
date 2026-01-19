// question no. 15


// ### **Write a program to input any number and print whether its last digit is even or odd using modulus.**

// (Do NOT use if/else → just print the last digit and remainder.)

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int lastDigit = num % 10;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Remainder when divided by 2: " << lastDigit % 2 << endl;
    return 0;
}
