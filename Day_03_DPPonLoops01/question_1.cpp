// question 1 



// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10





#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }

    cout << "Sum of even digits: " << sum << endl;
    return 0;
}





// // sum of  all number 


// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the value ";
//     cin>> n;
//     int sum = 0;
//     for (int i = 0; i <=n; i++){
//         if (i%2 ==0){
//             sum+=i;
//             cout<<sum<< endl;
//         }
//     }
// }






