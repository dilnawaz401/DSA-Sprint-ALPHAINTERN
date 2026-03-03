

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s="a man a plan";
    for (int i =0 ; i<s.length();i++){
        if (isalnum(s[i])){
            cout<<s[i]<<"alpha"<<endl ;
        }
        else{
            cout<<s[i]<<" "<<"not alpha"<<endl;
        }
    }
    return 0;
}

    