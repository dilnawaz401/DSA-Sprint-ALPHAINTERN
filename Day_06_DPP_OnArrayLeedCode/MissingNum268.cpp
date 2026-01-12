// #include <iostream>
// #include <vector>
// using namespace std;


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expected_sum = n * (n + 1) / 2;
//         int actual_sum = 0;
//         for (int num : nums) {
//             actual_sum += num;
//         }
//         return expected_sum - actual_sum;
        
//     }
// };



// Find missing number in an array [Leetcode-268]  

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;

class Solution {
public:
    
    int missingNumber(vector<int>& nums) {
    int ans = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        ans =ans ^ i ^ nums[i];
    }
    return ans;
}

    
};