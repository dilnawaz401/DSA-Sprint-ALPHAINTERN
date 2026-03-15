#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int lo = 0;
    int hi = nums.size() - 1;

    while(lo < hi){
        int mid = lo + (hi - lo) / 2;

        if(nums[mid] > nums[hi])
            lo = mid + 1;
        else
            hi = mid;
    }

    return nums[lo];
}

int main(){
    vector<int> nums = {3,4,5,1,2};

    cout << findMin(nums);
}

