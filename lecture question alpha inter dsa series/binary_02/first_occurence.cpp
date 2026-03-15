#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    
    int low = 0, high = nums.size() - 1;
    int first = -1, last = -1;

    // Find first position (Lower Bound)
    while(low <= high) {
        int mid = (low + high) / 2;

        if(nums[mid] == target) {
            first = mid;        // store index
            high = mid - 1;     // move left to find earlier position
        }
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0, high = nums.size() - 1;

    // Find last position (Upper Bound)
    while(low <= high) {
        int mid = (low + high) / 2;

        if(nums[mid] == target) {
            last = mid;        // store index
            low = mid + 1;     // move right to find later position
        }
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return {first, last};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);
    cout << ans[0] << " " << ans[1];
}