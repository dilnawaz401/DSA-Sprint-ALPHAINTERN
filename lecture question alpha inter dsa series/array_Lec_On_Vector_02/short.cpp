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




#include <iostream>
#include <vector>
#include <algorithm>     
using namespace std;
int main(){
    int n=3;
    vector <int > v;
    
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    sort(v.begin(),v.end());
    for (int i = 0 ; i <n; i++){
        cout<< v[i]<<" ";
    }

}