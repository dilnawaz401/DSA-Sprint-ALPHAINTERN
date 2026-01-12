// #include <iostream>
// #include <vector>
// using namespace std;

// void moveZeroes(vector<int>& nums) {
//     vector<int> temp;
//     for (int x : nums)
//         if (x != 0) temp.push_back(x);
//     while (temp.size() < nums.size())
//         temp.push_back(0);
//     nums = temp;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void moveZeroes(vector<int>& nums) {
//     int j = 0;
//     for (int i = 0; i < nums.size(); i++)
//         if (nums[i] != 0)
//             nums[j++] = nums[i];
//     while (j < nums.size())
//         nums[j++] = 0;
// }




// move zeroes leetcode 283


#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i=0;


        for (int j=0;j<nums.size();j++){
            if (nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }

        
    }
};