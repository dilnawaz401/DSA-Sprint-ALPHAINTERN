// question no.1


// ### **Write a program to input a 3-digit number and print the sum of its digits.**





#include <iostream>
using namespace std;
int main (){
    int n ,sum = 0;
    cout << "enter the value ";
    cin>>n;
    while(n>0){
        sum = sum+n%10;
        n=n/10;
    }
cout<<"sum of digits is ="<<sum;
return 0;

}