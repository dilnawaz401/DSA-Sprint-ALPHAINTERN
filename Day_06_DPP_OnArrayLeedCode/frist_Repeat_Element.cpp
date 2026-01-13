// first repeating element [gfg]

//  Brute Force Approach


// Time Complexity: O(n²)
// Space Complexity: O(1)



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = 7;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i];
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}




//   2️. Better Approach (Using Hash Map – First Index)


// Time Complexity: O(n)
// Space Complexity: O(n)



#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = 7;

    unordered_map<int, int> mp;
    int minIndex = n;

    for(int i = 0; i < n; i++) {
        if(mp.find(arr[i]) != mp.end())
            minIndex = min(minIndex, mp[arr[i]]);
        else
            mp[arr[i]] = i;
    }

    if(minIndex == n)
        cout << -1;
    else
        cout << arr[minIndex];

    return 0;
}



// 3.  Optimal Approach (GFG Preferred – Hashing from Right)


// Time Complexity: O(n)
// Space Complexity: O(n)



#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = 7;

    unordered_set<int> s;
    int ans = -1;

    for(int i = n - 1; i >= 0; i--) {
        if(s.find(arr[i]) != s.end())
            ans = arr[i];
        else
            s.insert(arr[i]);
    }

    cout << ans;
    return 0;
}
