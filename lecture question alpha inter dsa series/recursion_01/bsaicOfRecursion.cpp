
#include <iostream>
using namespace   std;
void display(int n )
{
    if (n==0) return;// base case

    cout<<"alpha_intern"<<" ";
    display(n-1);

}
int main(){
    display(4);
}
