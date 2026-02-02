#include <iostream>
#include <vector>
#include <algorithm>     
using namespace std;
int main(){
    vector <int > v;
    
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    int n =v.size();

    int num = 0;
    int num2=0;
    for (int i = 0;i <n; i++){
        if (v[i]==0){
            num++;

     
        }
        else{
            num2++;
        }
    }
    for (int i = 0;i <n; i++){
        if (i<num){
            v[i]=0;
            
        }
        else{
            v[i]=1;
        }
    }
    for (int i = 0;i <n; i++){
        cout<<v[i]<<endl;
    }

}