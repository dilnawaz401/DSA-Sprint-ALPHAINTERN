#include <iostream>
#include <vector>
using namespace std;
int firstRepeated(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                return i + 1;   // 1-based index
        }
    }
    return -1;
}