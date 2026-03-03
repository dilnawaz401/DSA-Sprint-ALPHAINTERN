#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
    string temp = "";

    // Step 1: Remove special characters & convert to lowercase
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            temp += tolower(s[i]);
        }
    }

    // Step 2: Make a copy and reverse it
    string rev = temp;
    reverse(rev.begin(), rev.end());

    // Step 3: Compare
    return temp == rev;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}


// optimal approach



#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        if (!isalnum(s[left])) {
            left++;
        }
        else if (!isalnum(s[right])) {
            right--;
        }
        else {
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "True";
    else
        cout << "False";

    return 0;
}