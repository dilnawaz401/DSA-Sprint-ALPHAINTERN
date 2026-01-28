


// 3. Write a program to print a character array in reverse order.

#include <iostream>
using namespace std;

int main() {
    char str[50];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    // Find length without strlen()
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Print in reverse order
    cout << "Reverse string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}
