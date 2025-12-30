#include <iostream>
#include <vector>
#include <algorithm>     
using namespace std;
void display(vector<int >& a){
    for(int  i = 0 ; i <a.size();i++){
    cout<<a[i]<<" "<<endl;
    }
}
void reversebypart(int i , int j , vector<int>&v){
    while (i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector <int > v;
    
    v.push_back(10);
    v.push_back(80);
    v.push_back(60);
    v.push_back(9);
    v.push_back(4);
    int n =v.size();
    cout<<"before rev";
    int k =2;
    display(v);
    reversebypart(0,n-k-1,v);
    reversebypart(n-k,n-1,v);
    reversebypart(0,n-1,v);
    cout<<"after rev"<<endl;
    display(v);

    

}