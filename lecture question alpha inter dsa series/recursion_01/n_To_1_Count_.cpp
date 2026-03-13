#include <iostream>
using namespace   std;
void display(int n )
{
    if (n==0) return;// base case

    cout<<n<<"  ";//work
    display(n-1);// recursive call

}
int main(){
    display(4);
}
