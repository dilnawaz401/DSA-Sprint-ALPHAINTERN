#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {0,0,0,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1;

    int lo = 0;
    int hi = n - 1;
    int firstidx = -1;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;

        if(arr[mid] == x){
            firstidx = mid;   // store index
            hi = mid - 1;     // search left side
        }
        else if(arr[mid] < x){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    if(firstidx == -1)
        cout << "total is = 0";
    else
        cout << "total is = " << n - firstidx;

    return 0;
}