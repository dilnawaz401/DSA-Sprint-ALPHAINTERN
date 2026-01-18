


// question no. 12

// Write a program to input an integer and print:**

// value before post-increment (`x++`)
// value after post-increment
// value after pre-increment (`++x`)


#include <iostream> 
using namespace std;
int main (){
    
    char x;
    cout << "enter the value ";
    cin >>x;
    cout << "pre increment of value is "<<++x<<endl;
    cout << "post increment of value is "<<x++<<endl;
    cout << " final  value  is "<<x<<endl;
    return 0;
}