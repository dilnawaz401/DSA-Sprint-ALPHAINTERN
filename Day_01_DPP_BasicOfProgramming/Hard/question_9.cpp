
//  question no. 9

// Write a program to input any amount of money in rupees and print how many 100-rupee notes can be made and how much money remains.

#include <iostream>
using namespace std;
int main (){
    int money;
    cout<<"enter the money";
    cin>> money;
    cout<< money/100 <<"  100ruppe notes"<<money%100<<  "money remain";
    return 0;

}