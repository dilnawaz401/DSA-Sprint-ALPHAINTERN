#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int first = -1, last = -1;
    
    int lo = 0, hi = n - 1;

    // Find First Position
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (nums[mid] == target) {
            first = mid;
            hi = mid - 1;
        }
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    lo = 0;
    hi = n - 1;

    // Find Last Position
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (nums[mid] == target) {
            last = mid;
            lo = mid + 1;
        }
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    return {first, last};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    cout << ans[0] << " " << ans[1];
}