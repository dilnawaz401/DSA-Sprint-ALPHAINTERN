
// quesion no. 10


// Take input integer n and print the sum from 1 to n.

#include <iostream>
using namespace std;
int main (){
    int n;
    int sum = 0;
    cout<<"enter the value";
    cin>> n;
    for (int i = 0 ;i <=n; i++){
        sum +=i;
        cout<< sum<< endl;
        
        
    }

    return 0;
}
