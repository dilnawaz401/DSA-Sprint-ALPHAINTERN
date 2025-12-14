
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<< "enter the value ";
    cin>> n;

    int arr[n];
    int x =4;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        if (arr[i]==x){
            cout<< "element found";
        }
        else{
            cout<<arr[i]<<endl;
        }
        
    }
   

    return 0;

}