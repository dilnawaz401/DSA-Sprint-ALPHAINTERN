// Leaders in array [GFG]

#include<vector>
#include <algorithm>
#include <iostream>
using namespace std ;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        int maxRight = arr[n - 1];
        ans.push_back(maxRight);   // last element is always a leader

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                maxRight = arr[i];
                ans.push_back(maxRight);
            }
        }

        reverse(ans.begin(), ans.end()); // to maintain order
        return ans;
    }
};

