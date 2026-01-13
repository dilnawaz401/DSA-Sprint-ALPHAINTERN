

// pivort index


// 1. Brute Force Approach


// Time Complexity: O(n²)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    for(int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;

        for(int l = 0; l < i; l++)
            leftSum += arr[l];

        for(int r = i + 1; r < n; r++)
            rightSum += arr[r];

        if(leftSum == rightSum) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}



// 2. Better Approach (Prefix Sum Array)


// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int prefix[n];
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    for(int i = 0; i < n; i++) {
        int leftSum = (i == 0) ? 0 : prefix[i - 1];
        int rightSum = prefix[n - 1] - prefix[i];

        if(leftSum == rightSum) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}


// 3. Optimal Approach (Single Pass)


// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;

    for(int i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - arr[i]) {
            cout << i;
            return 0;
        }
        leftSum += arr[i];
    }

    cout << -1;
    return 0;
}
