// //quesion no. 7


// Take input integer n, and print the AP 100, -97, -94… but only show the positive terms.

#include <iostream>
using namespace std;
int main (){
    int a,r,n;
    cout<<"enter the value ";
    cin>>a;
    cout<<"enter the value ";
    cin>>r;
    cout<<"enter the value ";
    cin>>n;
    for (int i=0;i<34;i++){
        cout<<a<<" ";
        a-=r;
    }    
        
    return 0;
}