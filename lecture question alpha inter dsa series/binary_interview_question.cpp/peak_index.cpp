#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int lo = 0;
    int hi = arr.size() - 1;

    while(lo < hi){
        int mid = lo + (hi - lo) / 2;

        if(arr[mid] < arr[mid+1])
            lo = mid + 1;
        else
            hi = mid;
    }

    return lo;
}

int main(){
    vector<int> arr = {0,2,4,6,5,3,1};

    cout << peakIndexInMountainArray(arr);
}