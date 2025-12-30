// #include <iostream>
// #include <vector>
// using namespace std;


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expected = n * (n + 1) / 2;
//         int actual = 0;

//         for (int num : nums) {
//             actual += num;
//         }

//         return expected - actual;
//     }
// };












// #include <iostream>
// #include <vector>
// using namespace std;


// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0;
//         int n = nums.size();

//         for (int i = 0; i < n; i++) {
//             if (nums[i] > nums[(i + 1) % n]) {
//                 count++;
//             }
//             if (count > 1) return false;
//         }
//         return true;
//     }
// };
        