


//  question no.5


// Write a program to input seconds and convert them into hours, minutes, and seconds.




#include <iostream>
using namespace std;

int main() {
    int sec, h, m, s;
    cin >> sec;

    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;

    cout << "Hours = " << h << endl;
    cout << "Minutes = " << m << endl;
    cout << "Seconds = " << s << endl;

    return 0;
}
