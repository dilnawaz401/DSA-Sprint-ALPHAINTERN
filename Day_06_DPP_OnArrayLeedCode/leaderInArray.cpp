#include <iostream>
#include <vector>
using namespace std;





vector<int> leaders(int a[], int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[i]) leader = false;
        if (leader) ans.push_back(a[i]);
    }
    return ans;
}



// #include <iostream>
// #include <vector>
// using namespace std;





// <int> leaders(int a[], int n) {
//     vector<int> ans;
//     int maxRight = a[n - 1];
//     ans.push_back(maxRight);

//     for (int i = n - 2; i >= 0; i--) {
//         if (a[i] >= maxRight) {
//             maxRight = a[i];
//             ans.push_back(a[i]);
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }



