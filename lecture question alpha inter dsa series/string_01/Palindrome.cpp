#include <iostream>
using namespace std;

int main() {
    char a[] = "madam";
    int i = 0, j = 0;

    // find length
    while (a[j] != '\0') {
        j++;
    }
    j = j - 1;

    // check palindrome
    while (i < j) {
        if (a[i] != a[j]) {
            cout << "Not Palindrome";
            return 0;
        }
        i++;
        j--;
    }

    cout << "Palindrome";
    return 0;
}