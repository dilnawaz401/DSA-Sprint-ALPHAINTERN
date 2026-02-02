// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int > v;
    
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(2);
    
//     cout<<v[0]<<endl;

// }







#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 3;
    vector <float> v;
    
    v.push_back(4.5);
    v.push_back(3.5);
    v.push_back(2.7);
    
    for (float i = 0 ; i<n ; i++){
        cout<< v[i]<<" ";
    }



}