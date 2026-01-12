// particular element rev.



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
    
    v.push_back(4);
    v.push_back(8);
    v.push_back(6);
    v.push_back(9);
    display(v);
    
    
    cout<<"after reversal----------"<<endl;
    reversebypart(1,3,v);
    display(v);
}






