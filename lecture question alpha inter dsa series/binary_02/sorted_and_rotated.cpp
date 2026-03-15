#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {

    int low = 0, high = nums.size() - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(nums[mid] == target)
            return mid;   // target found

        // check left sorted part
        if(nums[low] <= nums[mid]) {

            if(target >= nums[low] && target < nums[mid])
                high = mid - 1;     // move left
            else
                low = mid + 1;      // move right
        }
        // right sorted part
        else {

            if(target > nums[mid] && target <= nums[high])
                low = mid + 1;      // move right
            else
                high = mid - 1;     // move left
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums, target);
}