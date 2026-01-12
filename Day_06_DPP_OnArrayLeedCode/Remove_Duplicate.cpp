// Remove duplicates from sorted array [Leetcode-26]


// 1. Brute Force Approach

// Time Complexity: O(n²)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
                j--;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}





// 2. Better Approach (Using Sorting)


//  Time Complexity: O(n log n)
// Space Complexity: O(1)




#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    sort(arr, arr + n);

    int j = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    for(int i = 0; i <= j; i++)
        cout << arr[i] << " ";

    return 0;
}




// 3.Optimal Approach (Using Set / Hashing)


// Time Complexity: O(n)
// Space Complexity: O(n)



#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    unordered_set<int> s;

    for(int i = 0; i < n; i++)
        s.insert(arr[i]);

    for(auto x : s)
        cout << x << " ";

    return 0;
}
