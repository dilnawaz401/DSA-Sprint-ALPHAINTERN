// Print the following pattern
// Input : n = 4
// Output :
// A
// A B
// A B C
// A B C 





#include <iostream>
using namespace std;
int  main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;

    
    for(int i=1;i<=a;i++){
        for(int j = 1;j <=i;j++){
            cout<< char(j+96)<<" ";

        } 
        cout<<endl;
    }
}