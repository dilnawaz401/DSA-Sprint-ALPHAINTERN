#include <iostream>
using namespace std ;
int main(){
    int arr[]={4,5,6,7,8,2,0};
    cout<<&(arr)<<endl;
    cout<<&(arr[0])<<endl;
    cout<<&(arr[2])<<endl;
    cout<<&(arr[4])<<endl;
    cout<<&(arr[3])<<endl;
    return 0;
}