
// question no. 18



// Write a program to input an integer and print its ASCII equivalent character if converted using char(x).


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "ASCII equivalent character: " << char(num);
    return 0;
}
