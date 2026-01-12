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
// int singleNumber(vector<int>& nums) {
//     unordered_map<int, int> mp;
//     for (int x : nums) mp[x]++;
//     for (auto it : mp)
//         if (it.second == 1) return it.first;
//     return -1;
// }


// single number 136 

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans =ans^nums[i];
       
        }
        return ans;    
        
    }
};