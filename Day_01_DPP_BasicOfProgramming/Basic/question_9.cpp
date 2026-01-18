//queston no. 9



//  Write a program to input a double value and print only its decimal part.


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    double result = double(a) / double(b);
    cout << "Floating division result: " << result;
    return 0;
}




