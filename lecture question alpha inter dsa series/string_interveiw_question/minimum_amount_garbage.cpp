#include <iostream>
#include <vector>
using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int totalTime = 0;
    int lastM = 0, lastP = 0, lastG = 0;
    int n = garbage.size();

    // Step 1: Count garbage & find last positions
    for (int i = 0; i < n; i++) {
        totalTime += garbage[i].length();

        for (char ch : garbage[i]) {
            if (ch == 'M') lastM = i;
            if (ch == 'P') lastP = i;
            if (ch == 'G') lastG = i;
        }
    }

    // Step 2: Add travel time
    for (int i = 0; i < lastM; i++)
        totalTime += travel[i];

    for (int i = 0; i < lastP; i++)
        totalTime += travel[i];

    for (int i = 0; i < lastG; i++)
        totalTime += travel[i];

    return totalTime;
}

int main() {
    vector<string> garbage = {"G","P","GP","GG"};
    vector<int> travel = {2,4,3};

    cout << garbageCollection(garbage, travel);

    return 0;
}