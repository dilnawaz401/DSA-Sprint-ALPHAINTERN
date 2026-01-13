//  Move all negative number to the left side of array 


// 1. brute force 

// time complexity O(n)
// space complexity O(n)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6};
    int n = 6;
    int temp[n], k = 0;

    // Store negative numbers
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
            temp[k++] = arr[i];

    // Store positive numbers
    for(int i = 0; i < n; i++)
        
            temp[k++] = arr[i];

    // Copy back to original array
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}



// 2️. Better Approach( swapping )

//Time Complexity: O(n²)
//Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6};
    int n = 6;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] >= 0 && arr[j] < 0)
                swap(arr[i], arr[j]);
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}




// 3. Optimal Approach (Two Pointer Technique)



//Time Complexity: O(n)
//Space Complexity: O(1)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6};
    int n = 6;
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
