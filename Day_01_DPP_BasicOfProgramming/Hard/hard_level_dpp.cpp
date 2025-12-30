// question no.1






// #include <iostream>
// using namespace std;
// int main (){
//     int n ,sum = 0;
//     cout << "enter the value ";
//     cin>>n;
//     while(n>0){
//         sum = sum+n%10;
//         n=n/10;
//     }
// cout<<"sum of digits is ="<<sum;
// return 0;

// }






// question no.2






// #include <iostream>
// using namespace std;

// int main() {
//     int num, reversed = 0;
//     cout << "Enter a 2-digit number ";
//     cin >> num;
//     while(num>0){
//     reversed = (reversed * 10)+ (num%10);
//     num = num/ 10;
//     }
//     cout << "Reversed number: " << reversed;
//     return 0;
// }






//  question no.3




// #include <iostream>
// using namespace std ;
// int main(){
//     int age ;
//     cout << "enter the age ";
//     cin>> age;
//     cout<< age * 365;
//     return 0;

// }






//  question no.4


// #include <iostream>
// using namespace std;
// int main (){
//     int a ;
//     cout << "enter total minute";
//     cin>> a;
//     cout<<a/60 <<" hour " << a%60 << " minute ";
//     return 0;

// }




//  question no.5




// #include <iostream>
// using namespace std;
// int main (){
//     int a ;
//     cout<<"enter seconds";
//     cin>>a;
//     cout<< a/60 <<"hours "<< a%60<<"minutes"<<a%60<<"secomd";
//     return 0;

// }




//  question no.6



// #include <iostream>
// using namespace std;
// int main (){
//     int celsuis;
//     cout<< "enter the value of celsuis";
//     cin>>celsuis;
//     double  farenheit = (celsuis * 9/5)+32;
//     cout<< "farenheit is" << farenheit;
//     return 0;
// }




//  question no.7


// #include <iostream>
// using namspace std;
// int main (){
//     int a ;







// }







//  question no.8





// #include <iostream>
// using namespace std;
// int main (){
//     char ch ;
//     cout <<"enter the alphabet";
//     cin>> ch;
//     cout<< ++ch<<endl;
//     cout<< ++ch;
//     return 0;
// }






//  question no. 9



// #include <iostream>
// using namespace std;
// int main (){
//     int money;
//     cout<<"enter the money";
//     cin>> money;
//     cout<< money/100 <<"  100ruppe notes"<<money%100<<  "money remain";
//     return 0;

// }




//question no. 10

// #include <iostream>
// using namespace std ;
// int main (){
//     int a,b,c;
//     cout <<"enter the vale ";
//     cin>>a;
//     cout<<"enter the vale ";
//     cin>>b;
//     cout<<"enter the vale ";
//     cin>>c;
//     double avg =  double(a+b+c)/3;
//     cout<< "avg values ="<<avg;
//     return 0;


// }







// question no. 11


// #include <iostream>
// using namespace std;
// int main (){
//     int r ;
//     cout<< "enter the radius ";
//     cin>> r;
//     double radius_of_cricle = double (3.14 )*r*r;
//     cout<< "double radius_of_cricle=" << radius_of_cricle;
//     return 0;
// }




// // question no. 12




// #include <iostream>
// using namespace std;
// int main(){
//     double a;
//     int b;
//     cout<< "enter the value of double";
//     cin>> a;
//     cout<< "enter the value of integer";
//     cin>>b;
//     double c = int(b)-double (a);
//     cout<<"inter value=" <<int (c)<< "double value ="<< c <<endl;
    
//     return 0; 

// }
 

// question no. 13




// #include <iostream>
// using namespace std;
// int main (){
//     char ch;
//     char bh;
//     cout<< "enter the value of ch";
//     cin>> ch;
//     cout<< "enter the value of bh";
//     cin>> bh;
//     cout <<  "value is" <<int (ch - bh) << endl;
//     return 0;
// }



// question no. 14





// #include <iostream>
// using namespace std;
// int main(){
//     int min ;
//     cout<< "enter the total min";
//     cin>> min;
//     cout<<min%60<<"min"<<min%60<<"second";
//     return 0;
// }



// question no. 15




// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     int lastDigit = num % 10;
//     cout << "Last digit: " << lastDigit << endl;
//     cout << "Remainder when divided by 2: " << lastDigit % 2 << endl;
//     return 0;
// }








// question no. 16


// #include <iostream>
// using namespace std;

// int main() {
//     int totalSeconds, minutes, seconds;
//     cout << "Enter total seconds: ";
//     cin >> totalSeconds;
//     minutes = totalSeconds / 60;
//     seconds = totalSeconds % 60;
//     cout << minutes << " minutes and " << seconds << " seconds";
//     return 0;
// }




// question no. 17/






#include <iostream>
using namespace std;

int main() {
    char ch, cb;
    cout << "Enter two characters ";
    cin >> ch >> cb;
    cout << "ASCII difference " << int (ch - cb);
    return 0;
}




// question no. 18





// #include <iostream>
// using namespace std;

// int main() {
//     double num;
//     cout << "Enter a double number: ";
//     cin >> num;
//     int num_2 = (int)num;
//     double num_1 = num - num_2;
//     cout << "Integer part " << num_2 << endl;
//     cout << "Decimal part " << num_1 << endl;
//     cout << "Sum " << (double)num_2 + num_1;
//     return 0;
// }











