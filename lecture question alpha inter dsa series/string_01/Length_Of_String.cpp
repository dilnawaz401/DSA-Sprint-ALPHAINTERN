
#include <iostream>
using namespace std;
int main(){
    int length = 0 ;
    char ch[] ={'a', 'c','d', 't', 'l'};
    for(int i =0;i<5;i++){
        if(ch[i]=='\0')
        break;
        else
        cout<<ch[i]<<endl;
        length ++;
        
    }
    return 0;
}