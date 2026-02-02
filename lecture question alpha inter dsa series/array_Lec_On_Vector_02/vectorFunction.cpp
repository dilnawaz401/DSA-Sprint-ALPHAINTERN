#include <iostream>
#include <vector>
using namespace std;
void change (vector<int > & a){
    a[0]=100;
}
int main(){
    vector <int > v;
    
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    change (v);
    for (int i = 0 ; i <4 ; i++){
    cout<< v[i]<<" ";
}
    
    
}



