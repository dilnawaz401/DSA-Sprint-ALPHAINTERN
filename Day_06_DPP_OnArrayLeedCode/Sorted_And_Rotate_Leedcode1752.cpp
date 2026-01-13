
// Check if Array Is Sorted and Rotated [Leetcode-1752]

// 1. Brute Force Approach


// Time Complexity: O(n²)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
<<<<<<< HEAD
    for(int i = 1; i < n; i++)
        if(arr[i] < arr[i - 1])
            return false;
    return true;
=======
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1])
            return false;
    }
    return true;
    

>>>>>>> 0e1d113 (update on dpp 6)
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = 5;

    for(int r = 0; r < n; r++) {
        if(isSorted(arr, n)) {
<<<<<<< HEAD
            cout << "true";
=======
            cout << "true"<<endl;
>>>>>>> 0e1d113 (update on dpp 6)
            return 0;
        }
        // rotate left by 1
        int temp = arr[0];
        for(int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        arr[n - 1] = temp;
    }

    cout << "false";
<<<<<<< HEAD
=======
    
    

    
>>>>>>> 0e1d113 (update on dpp 6)
    return 0;
}



<<<<<<< HEAD
=======
// with element also 
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]) return false;
    }
    return true; // moved outside the loop
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = 5;
    for(int r = 0; r < n; r++) {
        if(isSorted(arr, n)) {
            cout << "true" << endl;
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
                return 0;
            }
        }
        // rotate left by 1
        int temp = arr[0];
        for(int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
        arr[n - 1] = temp;
    }
    cout << "false";
    return 0;
}


>>>>>>> 0e1d113 (update on dpp 6)

// 2. Better Approach


//  Time Complexity: O(n)
//  Space Complexity: O(1)
 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = 5;
    int count = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1])
            count++;
    }

    // Check last and first element
    if(arr[0] < arr[n - 1])
        count++;

    if(count <= 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}



//  3.Optimal Approach (LeetCode Official Logic)


// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int n = 5;
    int breaks = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[(i + 1) % n])
            breaks++;
    }

    if(breaks <= 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}

<<<<<<< HEAD
=======





>>>>>>> 0e1d113 (update on dpp 6)
