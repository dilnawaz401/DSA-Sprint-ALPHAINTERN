#include <iostream>
using namespace std ;
 bool isEven (int a){
    if ( a % 2 ==a){
        return true;
    }
    else {
        return false;
    }
 }
int main(){
    cout<< isEven(4);
}
