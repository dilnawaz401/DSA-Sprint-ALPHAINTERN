#include <iostream>
using namespace std;

string decodeMessage(string key, string message) {
    char map[26] = {0};
    char current = 'a';

    // Step 1: Build mapping
    for (int i = 0; i < key.length(); i++) {
        if (key[i] != ' ' && map[key[i] - 'a'] == 0) {
            map[key[i] - 'a'] = current;
            current++;
        }
    }

    // Step 2: Decode message
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == ' ')
            result += ' ';
        else
            result += map[message[i] - 'a'];
    }

    return result;
}

int main() {
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    cout << decodeMessage(key, message);

    return 0;
}