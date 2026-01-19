

// question 5



// Find the sum of the first n natural numbers. Take n input from the user?



#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}

// method 2


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = n * (n + 1) / 2;
    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}
