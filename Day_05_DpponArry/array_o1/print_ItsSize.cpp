#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>> n;
    int arr[n];

    for(int i = 1 ; i < n; i++){
        cin>>arr[i];

    }
    for(int i  = 1; i < n ; i++){
      
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr[2])<<endl;
    cout<<sizeof(arr[4])<<endl;
    cout<<sizeof(arr[3])<<endl;
    return 0;
}
     
        }

 