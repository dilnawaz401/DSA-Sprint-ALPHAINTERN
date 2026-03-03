#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string s, int k) {
    stack<pair<char, int>> st;

    for (char ch : s) {
        if (!st.empty() && st.top().first == ch) {
            st.top().second++;   // Increase count
            
            if (st.top().second == k) {
                st.pop();        // Remove when count == k
            }
        } else {
            st.push({ch, 1});    // Push new character
        }
    }

    string result = "";

    // Build final string
    while (!st.empty()) {
        result = string(st.top().second, st.top().first) + result;
        st.pop();
    }

    return result;
}

int main() {
    string s = "hfvjgggjj";
    int k = 3;

    cout << removeDuplicates(s, k);

    return 0;
}