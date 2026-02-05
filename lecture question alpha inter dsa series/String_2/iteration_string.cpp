#include <iostream>
using namespace std;
int main (){
    string  str;
    cout<< "enter the sttring ";
    cin>>str;
    for (int i =0;i < str.length();i++){

    cout<<str[i];
    }

}

// while loop

#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i =0;
    while (i<str.length()){
        cout<<str[i];
        i++;
    }
    
    

}