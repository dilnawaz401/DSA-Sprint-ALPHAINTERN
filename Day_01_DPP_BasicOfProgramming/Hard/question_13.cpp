 

// question no. 13

// Write a program to input a floating number and print only the fractional part.




#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;

    cout << n - (int)n;
    return 0;
}


// method 2


#include <iostream>
using namespace std ;
int main (){
    float num;
    cout << "enter the float num " << endl;
    cin >> num ;
    float fractional_part = num -(int)num;
    if (fractional_part < 0 ){
        fractional_part = -fractional_part ;
    }
    cout << "fractional part =" << fractional_part << endl;
    return 0;   
}