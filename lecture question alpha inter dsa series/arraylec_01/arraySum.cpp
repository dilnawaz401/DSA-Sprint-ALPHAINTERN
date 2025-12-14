// #include <iostream>
// using namespace std;
// int main (){
//     int arr[5]={1,2,3,4,5,};
//     int sum=0;
//     for (int i =1;i<=5;i++){
//         sum=sum+arr[i];
//     }
//     cout<<"sum = "<<sum ;

// }






#include <iostream>
using namespace std;
int main (){
    int n;
    cout<< "enter the value ";
    cin>> n;

    int arr[n];
    int sum= 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum ;

    return 0;

}