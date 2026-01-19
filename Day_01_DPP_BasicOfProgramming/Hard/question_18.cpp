// question no. 18

// ### **Write a program to input a double number, cast it to int, then print:**

// integer part
// decimal part
// integer part + decimal part (as double)



#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Enter a double number: ";
    cin >> num;
    int num_2 = (int)num;
    double num_1 = num - num_2;
    cout << "Integer part " << num_2 << endl;
    cout << "Decimal part " << num_1 << endl;
    cout << "Sum " << (double)num_2 + num_1;
    return 0;
}