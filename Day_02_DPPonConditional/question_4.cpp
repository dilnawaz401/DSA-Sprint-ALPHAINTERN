
//quesion no. 4


//Take input integer n and print all even numbers from 1 to n.

// //quesion no. 4




#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value ";
    cin>>n;
    for (int i=0;i<n;i++){
        if (i%2==0){
            cout<<i<<" even "<< endl;

        }
        else {
            cout<< i<<" odd"<< endl;

        }
    }
    return 0;
}
