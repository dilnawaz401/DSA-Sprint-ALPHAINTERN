#include <iostream>
using namespace std;

int main() {
    char a[] = "abcd";

    for (int i = 3; i >= 0; i--) {
        cout << a[i];
    }

    return 0;
}