#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {

    int low = 0, high = nums.size() - 1;

    while(low < high) {
        int mid = (low + high) / 2;

        if(nums[mid] > nums[high])
            low = mid + 1;     // minimum in right part
        else
            high = mid;        // minimum in left part
    }

    return nums[low];
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    cout << findMin(nums);
}