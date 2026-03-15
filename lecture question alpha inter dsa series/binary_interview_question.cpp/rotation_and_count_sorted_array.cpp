#include <iostream>
using namespace std;

int rotationCount(int a[], int n){
    int l=0,h=n-1;

    while(l<h){
        int m=(l+h)/2;
        if(a[m] > a[h]) 
            l = m+1;
        else 
            h = m;
    }
    return l;
}

int main(){
    int a[]={4,5,6,7,0,1,2};
    int n=7;
    cout<<rotationCount(a,n);
}