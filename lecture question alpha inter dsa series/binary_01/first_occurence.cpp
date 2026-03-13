






// problem solve 



#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={0};
    int n = 1;
    int x=0;
    int lo =0;
    int hi =n-1;

    bool flag = false ;// not present
    while (lo<=hi){
        int mid =lo+(hi -lo)/2;
        if(arr[mid]==x){
            if(mid == 0){
                flag =true;
                cout<<mid;
                break;
            }
            if( arr[mid-1]!=x){
                flag = true ;
                cout<<mid;
                break;
            }
            else{
                hi =mid-1;
            } // arr[mid-1]==x;

        }
        else if(arr[mid]<x) lo=mid+1;
        else hi =mid-1;
    }

}