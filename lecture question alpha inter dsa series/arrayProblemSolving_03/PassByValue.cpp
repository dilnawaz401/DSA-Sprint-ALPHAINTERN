#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void change(int a){
    a=10;
}
int main(){
    int x =5;
    cout<< x<<endl;
    change(x);
    cout<<x<<endl;
}