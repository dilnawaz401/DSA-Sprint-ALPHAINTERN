// Create a programme to add two numbers.
#include <iostream>
using namespace std; 

int main() 
{
    int num1, num2, sum; // Declare variables to store the two numbers and their sum

    // Prompt the user to enter the first number
    cout << "Enter first number: "; 
    cin >> num1; // Read the first number from user input

    // Prompt the user to enter the second number
    cout << "Enter second number: "; 
    cin >> num2; // Read the second number from user input

    sum = num1 + num2; // Calculate the sum of the two numbers

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl; 

    return 0; // Indicate that the program ended successfully
}