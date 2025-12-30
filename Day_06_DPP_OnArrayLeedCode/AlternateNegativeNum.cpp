#include <iostream>
#include <vector>
using namespace std;



void rearrange(int arr[], int n) {
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
        (arr[i] >= 0 ? pos : neg).push_back(arr[i]);

    int i = 0, p = 0, ne = 0;
    while (p < pos.size() && ne < neg.size()) {
        arr[i++] = pos[p++];
        arr[i++] = neg[ne++];
    }
}