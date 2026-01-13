


// move zeroes leetcode 283



// 1. Brute Force Approach


// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int temp[n];
    int k = 0;

    // Store non-zero elements
    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            temp[k++] = arr[i];

    // Fill remaining with zeros
    while(k < n)
        temp[k++] = 0;

    // Copy back
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}




// 2. Better Approach (Two Pass In-Place)

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int index = 0;

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0)
            arr[index++] = arr[i];
    }

    // Fill rest with zeros
    while(index < n)
        arr[index++] = 0;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}



// 3. Optimal Approach (Single Pass – Swap Method)


// Time Complexity: O(n)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int j = 0; // position for non-zero

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
