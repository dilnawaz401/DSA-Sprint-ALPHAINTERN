#include <iostream>
#include <vector>
#include <algorithm>     
using namespace std;
int main(){
    vector <int > v;
    
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    cout<<v[0]<<endl;
    sort(v.begin(),v.end());

}