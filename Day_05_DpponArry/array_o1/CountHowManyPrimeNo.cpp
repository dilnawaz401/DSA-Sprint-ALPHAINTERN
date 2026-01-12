#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        int num = arr[i], flag = 0;
        if (num <= 1) flag = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << num << " is prime "<< endl;
        else cout << num << " is not prime ";
    }
    return 0;
}