#include <iostream>
using namespace std;
int  main(){
    int a;
    cout<<"enter the value of a ";
    cin>>a;
    int mid=(a+1)/2;
    
    for(int i=1;i<=a;i++){
        for(int j = 1;j <=a;j++){
            if (i==mid||j==mid)
            cout<< "*";
            else
                cout<<" ";
            }
             cout<<endl;
        }
            

    return 0;} 
       
