

// quesion no. 12


// Take input integer n and print the factorial of n using a for loop


#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial " << fact;
    return 0;
}











