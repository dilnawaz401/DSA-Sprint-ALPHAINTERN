

// quesion no. 11


// Take input integer n and print all multiples of 3 from 1 to n using a while loop.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter the value of n";
    cin >> n;
    int i = 3;
    while(n>i){
        cout << i << " ";
        i+=3;
    }
    return 0;
}




