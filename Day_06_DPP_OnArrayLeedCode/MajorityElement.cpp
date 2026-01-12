// #include <iostream>
// #include <vector>
// using namespace std;

// int singleNumber(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i++) {
//         int cnt = 0;
//         for (int j = 0; j < nums.size(); j++)
//             if (nums[i] == nums[j]) cnt++;
//         if (cnt == 1) return nums[i];
//     }
//     return -1;
// }



// #include <iostream>
// #include <vector>
// using namespace std;
// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//     for (int i = 0; i < n; i++) {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//             if (nums[i] == nums[j]) cnt++;
//         if (cnt > n / 2) return nums[i];
//     }
//     return -1;

// }





// #include <iostream>
// #include <vector>
// using namespace std;
// int majorityElement(vector<int>& nums) {
//     int count = 0, candidate = 0;
//     for (int x : nums) {
//         if (count == 0) candidate = x;
//         count += (x == candidate) ? 1 : -1;
//     }
//     return candidate;
// }





// majority element 169 

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int candidate = nums[n/2];
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == candidate)
                count++;
        }

        if(count > n/2)
            return candidate;
        else
            return -1;
    }
};