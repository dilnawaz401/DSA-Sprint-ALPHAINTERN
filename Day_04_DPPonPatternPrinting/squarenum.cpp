// Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4



#include <iostream>
using namespace std;
int  main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;
     int b;
    cout<<"enter the value of a ";
    cin>>b;
    
    for(int i=1;i<=a;i++){
        for(int j = 1;j <=b;j++){
            cout<<i<<" ";

        } 
        cout<<endl;
    }
    return 0;
}