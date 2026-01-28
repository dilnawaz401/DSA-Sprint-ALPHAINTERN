

// 2. Write a program to count the length of a character array without using strlen().


#include <iostream>
using namespace std;

int main() {
    char str[50];
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 50);

    // Counting length without strlen()
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "Length of the string = " << length;

    return 0;
}
