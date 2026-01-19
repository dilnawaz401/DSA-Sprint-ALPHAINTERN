

// question 2



// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;
    cin >> n;

    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    cout << n + rev;
    return 0;
}
