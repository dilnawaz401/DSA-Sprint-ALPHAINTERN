#include <iostream>
using namespace std ;
int main(){
    int n;
    cout<< "enter the value ";
    cin>>n;
    int arr[n];

    for (int i = 0; i <= n ; i++){
        cin>>arr[i];

    }
    int evenCount = 0;
    int oddCount = 0;

    for(int i =0;i<=n ;i++){
        if( arr[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
   }  
   cout<<"total even no.= " <<evenCount<<endl;
   cout<<"total odd no. = " <<oddCount<<endl;
}