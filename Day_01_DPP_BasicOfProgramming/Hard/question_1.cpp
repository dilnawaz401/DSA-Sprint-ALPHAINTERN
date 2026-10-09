// question no.1


// Write a program to input a 3-digit number and print the sum of its digits.**
// using 365



#include <iostream>
using namespace std;
int main (){
    int n , sum = 0;
    cout << "enter the value ";
    cin>>n;
    while(n>0){
        sum = sum+n%10;
        n=n/10;
    }
cout<<"sum of digits is ="<<sum;
return 0;

}




//  using for loop 

#include <iostream>
 using namespace std;
  int main()
   { 
    int n,
     sum = 0;
      cout << "Enter the value: "; 
      cin >> n;
       for (; n > 0; n = n / 10) {
        sum = sum + n % 10; }
        cout << "Sum of digits is = " << sum;
        return 0; }