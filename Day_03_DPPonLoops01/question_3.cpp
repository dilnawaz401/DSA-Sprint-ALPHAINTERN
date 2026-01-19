// question 3

// Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        cout << "Factorial of " << i << " = " << fact << endl;
    }

    return 0;
}
