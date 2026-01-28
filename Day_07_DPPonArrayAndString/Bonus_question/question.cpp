






// #⭐ Bonus Challenge (Optional)

// 1. Create your own function:
    
//     ```cpp
//     int myLength(char arr[]);
    
//     ```
    
//     - It should return the length of the character array.
// 2. Write a function that converts all lowercase characters to uppercase **without using built-in functions**.



#include <iostream>
using namespace std;

// Function to find length of character array
int myLength(char arr[]) {
    int count = 0;
    while (arr[count] != '\0') {
        count++;
    }
    return count;
}

// Function to convert lowercase to uppercase
void toUppercase(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - 32;   // ASCII conversion
        }
    }
}

int main() {
    char str[50];

    cout << "Enter a string: ";
    cin.getline(str, 50);

    cout << "Length of string = " << myLength(str) << endl;

    toUppercase(str);
    cout << "Uppercase string = " << str << endl;

    return 0;
}
