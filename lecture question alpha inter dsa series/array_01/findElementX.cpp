
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<< "enter the value = ";
    cin>> n;

    int arr[n];
    int x;
    cout<<"say me the value of x = ";

    cin>>x;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        if (arr[i]==x){
            cout<< "element found and the  index value of x = " << i <<endl;
            return 0;
            
        }
       
    }
     cout<< "not found";
    return 0 ;
}




