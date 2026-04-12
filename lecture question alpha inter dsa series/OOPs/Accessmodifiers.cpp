


// #include<iostream>
// using namespace std ;
// class bankaccount{
//     public:
//     double bankbalance;

// };
// int main(){
//     bankaccount myaccount;
//     myaccount.bankbalance=5000;
//     cout<< myaccount.bankbalance ;
// }





// other code 



#include<iostream>
using namespace std ;
class bankaccount{
    private :
    double bankbalance;

    public :
         void setbalance(double balance ){
            bankbalance = balance;
         } 

         double getbalance(){
            return bankbalance ; 
         }

};
int main(){
    bankaccount myaccount;
    myaccount.setbalance(5000);
    cout << myaccount.getbalance();
 
}