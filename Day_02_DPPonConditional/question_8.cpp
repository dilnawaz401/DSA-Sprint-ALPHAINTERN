
// //quesion no. 8


// Take input integers a, r, n and print the first n terms of GP.

#include <iostream>
using namespace std;
int main (){
    int a,r,n;

    cout<<"enter the value of first term ";
    cin>>a;
    cout<<"enter the value of difference  ";
    cin>>r;
    cout<<"enter the value ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<a<<" ";
        a*=r;
    }    
        
    return 0;
}

