#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = ("hello_alphaintern");
    vector<char> v;

    // Store characters of string in vector
    for(int i = 0; i < s.length(); i++) {
        v.push_back(s[i]);
    }

    // Print vector using for loop
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "";
    }

    return 0;
}