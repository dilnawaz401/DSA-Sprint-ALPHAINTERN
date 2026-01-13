// Leaders in array [GFG]



// 1. Brute Force Approach


// Time Complexity: O(n²)
// Space Complexity: O(1)



#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    for(int i = 0; i < n; i++) {
        bool leader = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader)
            cout << arr[i] << " ";
    }

    return 0;
}



// 2. Better Approach (Using Extra Array)

// Time Complexity: O(n)
// Space Complexity: O(n)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    int leaders[n];
    int maxRight = arr[n - 1];
    int k = 0;

    leaders[k++] = maxRight;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[k++] = arr[i];
        }
    }

    // Print in reverse order
    for(int i = k - 1; i >= 0; i--)
        cout << leaders[i] << " ";

    return 0;
}

  
// 3.Optimal Approach (In-Place, GFG Preferred)


// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    int maxRight = arr[n - 1];
    cout << maxRight << " ";

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }

    return 0;
}
