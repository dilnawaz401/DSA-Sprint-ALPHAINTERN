#include <iostream>
using namespace std;

int search(int a[], int n, int target){
    int l=0;
    int 
    h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==target) return m;

        if(a[l]<=a[m]){ 
            if(target>=a[l] && target<a[m]) h=m-1;
            else l=m+1;
        }
        else{
            if(target>a[m] && target<=a[h]) l=m+1;
            else h=m-1;
        }
    }
    return -1;
}

int main(){
    int a[]={4,5,6,7,0,1,2};
    int n=7,target=0;
    cout<<search(a,n,target);
}