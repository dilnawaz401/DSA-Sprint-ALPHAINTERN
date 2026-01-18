
// question no. 13

// Write a program to input two integers a and b, convert them into double using type casting, and print the floating division result.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";

    cin >> a ;
    cout << "Enter integers: ";
    cin>> b;

    double result = double(a) / double(b);
    cout << "double division result: " << (result)<<endl;
    
    cout << "Floating division result: " <<  float (result) <<endl;
}




// #include <iostream>
// using namespace std;

// int main() {
//     double d = 3.141592653589793;
//     float f = static_cast<float>(d);
//     cout << "Double: " << d << endl;
//     cout << "Float: " << f << endl;
//     return 0;
// }