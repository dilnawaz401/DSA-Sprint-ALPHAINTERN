// majority element 


// 1. Brute Force Approach

// Time Complexity: O(n²)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > n / 2) {
            cout << arr[i];
            return 0;
        }
    }

    return 0;
}




// 2. Better Approach (Using Hash Map)



// Time Complexity: O(n)
// Space Complexity: O(n)



#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
        if(mp[arr[i]] > n / 2) {
            cout << arr[i];
            return 0;
        }
    }

    return 0;
}




// 3. Optimal Approach (Boyer–Moore Voting Algorithm)


// Time Complexity: O(n)
// Space Complexity: O(1)



#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    int candidate = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0)
            candidate = arr[i];

        if(arr[i] == candidate)
            count++;
        else
            count--;
    }

    cout << candidate;
    return 0;
}
