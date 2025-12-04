// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5



#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int flag = 1;

    for (int i = 1; i <= n; i++) {
        if (flag == 1) {
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << j << " ";
            }
            flag = 0;
        } else {
            char ch = 'A';
            for (int j = 1; j <= (2 * i); j++) {
                cout << ch << " ";
                ch++;
            }
            flag = 1;
        }
        cout << endl;
    }
    return 0;
}


