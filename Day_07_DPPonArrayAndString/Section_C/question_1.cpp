

//  1. Create a character array of size 50 and take input of a **full sentence** (with spaces) 
//     - Print the sentence character by character using a loop and null character condition.


#include <iostream>
using namespace std;

int main() {
    char sentence[50];

    // Taking full sentence input (with spaces)
    cout << "Enter a sentence: ";
    cin.getline(sentence, 50);

    // Printing character by character using loop and '\0'
    cout << "Characters in the sentence are:\n";
    for (int i = 0; sentence[i] != '\0'; i++) {
        cout << sentence[i] << endl;
    }

    return 0;
}
