
// question 6






// 6. Write a program in C++ to find a prime number within a range.

// `Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25`





#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << ":\n";
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) cout << i << " ";
    }
    return 0;
}

