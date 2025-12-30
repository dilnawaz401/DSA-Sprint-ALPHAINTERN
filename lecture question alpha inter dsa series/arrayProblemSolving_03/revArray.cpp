#include <iostream>
#include <vector>
#include <algorithm>     
using namespace std;
void display(vector<int >& a){
    for(int  i = 0 ; i <a.size();i++){
    cout<<a[i]<<" "<<endl;
    }
}
int main(){
    vector <int > v;
    
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    display(v);
    int i=0;
    int j = v.size()-1;
    while (i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
    cout<<"after reversal----------"<<endl;
    display(v);

}
