#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int > v;
    
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    cout<< v[0];
    
}





// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
    
//     vector <int > v={1,2,3,4,5,6,8};

//     v.pop_back();
    
//     for (int i = 0; i<v.size() ;i++)
       
//         cout<< v[i]<<" ";
    
    
// }