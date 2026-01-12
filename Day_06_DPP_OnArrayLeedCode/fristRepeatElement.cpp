// #include <iostream>
// #include <vector>
// using namespace std;
// int firstRepeated(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j])
//                 return i + 1;   // 1-based index
//         }
//     }
//     return -1;
// }




// First Repeating Element [GFG]  

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;

class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        int ans = -1;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    ans = i + 1;
                    return ans;
                }
            }
        }
        return ans;
    }
};