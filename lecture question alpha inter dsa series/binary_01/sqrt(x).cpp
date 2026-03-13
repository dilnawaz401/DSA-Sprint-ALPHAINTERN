#include<iostream>
using namespace std;

int mySqrt(int x) {
    long long low = 0, high = x, mid, ans = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(mid * mid == x)
            return mid;
        else if(mid * mid < x) {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    return ans;
}

int main() {
    int x = 8;
    cout << mySqrt(x);
    return 0;
}