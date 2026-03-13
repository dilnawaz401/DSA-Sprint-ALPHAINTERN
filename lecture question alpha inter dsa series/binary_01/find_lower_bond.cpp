#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,5,7,9,10};
    int n = 7;
    int x=9;
    int lo =0;
    int hi =n-1;
    bool flag =false; //not present 
    while (lo<=hi){
        int mid=lo+(hi-lo)/2;
        if (arr[mid]==x){ 
            flag =true;
            cout<<arr[mid-1];
            break;

        }
        else if (arr[mid]<x) lo=mid+1;
        else mid -1;
    }
        if (flag == false) cout<<arr[hi];
}
