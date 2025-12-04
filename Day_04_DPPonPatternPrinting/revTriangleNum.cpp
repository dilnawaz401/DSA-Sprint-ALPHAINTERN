// print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1





#include <iostream>
using namespace std;
int  main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;
    
    for(int i=1;i<=a;i++){
        for(int j = 1;j <=a+1-i;j++){
            cout<< j<<" " ;

        } 
        cout<<endl;
    }
}