#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int > v;
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"____"<<endl;


    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"____"<<endl;


    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"____"<<endl;


    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<"____"<<endl;

    
    v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}