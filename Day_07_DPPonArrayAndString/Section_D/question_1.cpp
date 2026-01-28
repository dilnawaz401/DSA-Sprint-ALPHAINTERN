



// 1. Take a character array as input and check whether it is a **palindrome**.
//     - Example: `madam`, `level`



#include <iostream>
using namespace std;

int main() {
    char str[50];
    int length = 0;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    // Find length
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a Palindrome";
    else
        cout << "The string is NOT a Palindrome";

    return 0;
}
