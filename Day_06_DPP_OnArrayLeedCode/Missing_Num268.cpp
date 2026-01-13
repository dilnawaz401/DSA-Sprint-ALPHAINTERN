
// Find missing number in an array [Leetcode-268]  


//1️. Brute Force Approach


// Time Complexity: O(n²)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    for(int num = 1; num <= n; num++) {
        bool found = false;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] == num) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << num;
            break;
        }
    }

    return 0;
}




// 2️.Better Approach (Using Hashing)


// Time Complexity: O(n)
// Space Complexity: O(n)
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    bool hash[n + 1] = {false};

    for(int i = 0; i < n - 1; i++)
        hash[arr[i]] = true;

    for(int i = 1; i <= n; i++) {
        if(!hash[i]) {
            cout << i;
            break;
        }
    }

    return 0;
}


// 3️. Optimal Approach

// Time Complexity: O(n)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n - 1; i++)
        sum += arr[i];

    cout << total - sum;
    return 0;
}



// method 2 using xor 


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;

    int xor1 = 0, xor2 = 0;

    for(int i = 1; i <= n; i++)
        xor1 ^= i;

    for(int i = 0; i < n - 1; i++)
        xor2 ^= arr[i];

    cout << (xor1 ^ xor2);
    return 0;
}
