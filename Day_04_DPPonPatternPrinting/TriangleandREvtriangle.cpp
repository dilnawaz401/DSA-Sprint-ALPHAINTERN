#include <iostream>
using namespace std;
int  main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;
    int b;
    cout<<"enter the value of b";
    cin>>b;
    
    for(int i=1;i<=a;i++){
        for(int j = 1;j <=i;j++){
            cout<< "*" <<" ";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=b;i++){
        for(int j = 1;j <=b+1-i;j++){
            cout<< "*"<<" " ;

        } 
        cout<<endl;
    }
}
  