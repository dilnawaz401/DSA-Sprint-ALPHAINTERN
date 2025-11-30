

// question 1 







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







// #include <iostream>
// using namespace std;

// int main() {
//     int num, sum = 0;
//     cout << "Enter a number: ";
//     cin >> num;

//     while (num > 0) {
//         int digit = num % 10;
//         if (digit % 2 == 0) {
//             sum += digit;
//         }
//         num /= 10;
//     }

//     cout << "Sum of even digits: " << sum << endl;
//     return 0;
// }





//question 2



// `
 



// question 3





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     unsigned long long fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//         cout << "Factorial of " << i << " = " << fact << endl;
//     }

//     return 0;
// }




// question 4


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int a = 0, b = 1, next;
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         next = a + b;
//         a = b;
//         b = next;
//     }
//     return 0;
// }




// question 5







// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     cout << "Sum of first " << n << " natural numbers: " << sum << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int sum = n * (n + 1) / 2;
//     cout << "Sum of first " << n << " natural numbers: " << sum << endl;
//     return 0;
// }






// question 6



// #include <iostream>
// using namespace std;

// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int start, end;
//     cout << "Enter start of range: ";
//     cin >> start;
//     cout << "Enter end of range: ";
//     cin >> end;

//     cout << "Prime numbers between " << start << " and " << end << ":\n";
//     for (int i = start; i <= end; i++) {
//         if (isPrime(i)) cout << i << " ";
//     }
//     return 0;
// }


 // question 7



 

// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) sum -= i;
//         else sum += i;
//     }

//     cout << "Sum of the series: " << sum << endl;
//     return 0;
// }




