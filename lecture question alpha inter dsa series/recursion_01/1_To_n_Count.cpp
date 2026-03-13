#include <iostream>
using namespace   std;
void display(int n )
{
    if (n==0) return;// base case
    display(n-1);// recursive call

    cout<<n<<"  ";//work
   

}
int main(){
    display(4);
}