// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int > v;
    
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.pop_back();
//     cout<< v[0];
// }





#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 3;
    vector <int > v;
    
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    for (int i = 0; i<=n ;i++){
       
        cout<< v[i]<<" ";
    }
    v.pop_back();
}