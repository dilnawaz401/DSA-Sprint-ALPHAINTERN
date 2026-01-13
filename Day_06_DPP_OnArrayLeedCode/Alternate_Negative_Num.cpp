// Alternate Positive Negative [GFG]

<<<<<<< HEAD

=======
>>>>>>> 0e1d113 (update on dpp 6)
// 1. Brute Force Approach (Using Extra Arrays)

//Time Complexity: O(n)
//Space Complexity: O(n)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, -1, 4};
    int n = 6;

    int pos[n], neg[n];
    int p = 0, q = 0;

    // Separate positives and negatives
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    int i = 0, j = 0, k = 0;

    // Merge alternately
    while(i < p && j < q) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // Remaining elements
    while(i < p)
        arr[k++] = pos[i++];

    while(j < q)
        arr[k++] = neg[j++];

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}






//2. Better Approach (Shifting Without Extra Arrays)



//Time Complexity: O(n²)
//Space Complexity: O(1)



#include <iostream>
using namespace std;

void rightRotate(int arr[], int out, int cur) {
    int temp = arr[cur];
    for(int i = cur; i > out; i--)
        arr[i] = arr[i - 1];
    arr[out] = temp;
}

int main() {
    int arr[] = {1, -2, 3, -4, -1, 4};
    int n = 6;
    int out = -1;

    for(int i = 0; i < n; i++) {
        if(out >= 0) {
            if((arr[out] >= 0 && arr[i] < 0) ||
               (arr[out] < 0 && arr[i] >= 0)) {
                rightRotate(arr, out, i);
                out = -1;
            }
        }
        else {
            if((arr[i] >= 0 && i % 2 == 1) ||
               (arr[i] < 0 && i % 2 == 0))
                out = i;
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}




// 3️. Optimal Approach (Two Arrays + Index Jumping)


// Time Complexity: O(n)
// Space Complexity: O(n) (but fastest & clean)


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, -1, 4};
    int n = 6;
    int res[n];

    int pos = 0, neg = 1;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            res[pos] = arr[i];
            pos += 2;
        }
        else {
            res[neg] = arr[i];
            neg += 2;
        }
    }

    for(int i = 0; i < n; i++)
        cout << res[i] << " ";

    return 0;
}
