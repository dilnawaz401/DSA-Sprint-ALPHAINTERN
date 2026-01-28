



// 2. Write a program to **replace spaces with `@`** in a character array.
//     - Input: `Alpha Intern`
//     - Output: `Alpha@Intern`


#include <iostream>
using namespace std;

int main() {
    char str[50];

    cout << "Enter a string: ";
    cin.getline(str, 50);

    // Replace space with '@'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '@';
        }
    }

    cout << "Output: " << str;

    return 0;
}
