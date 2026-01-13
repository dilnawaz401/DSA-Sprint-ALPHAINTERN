

// single number 136 

// 1. Brute Force Approach


// Time Complexity: O(n²)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1) {
            cout << arr[i];
            return 0;
        }
    }

    return 0;
}


// 2. Better Approach (Using Hashing)


// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++)
        mp[arr[i]]++;

    for(auto it : mp) {
        if(it.second == 1) {
            cout << it.first;
            break;
        }
    }

    return 0;
}



// 3. Optimal Approach (Bitwise XOR)


// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;

    int ans = 0;
    for(int i = 0; i < n; i++)
        ans ^= arr[i];

    cout << ans;
    return 0;
}
