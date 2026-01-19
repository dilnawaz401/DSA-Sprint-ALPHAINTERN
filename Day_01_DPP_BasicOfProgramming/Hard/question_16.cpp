

// question no. 16


// Write a program to input the total number of seconds and convert it into minutes + seconds.


#include <iostream>
using namespace std;

int main() {
    int totalSeconds, minutes, seconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    cout << minutes << " minutes and " << seconds << " seconds";
    return 0;
}