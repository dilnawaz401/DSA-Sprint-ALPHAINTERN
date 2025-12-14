// #include <iostream>
// using namespace std;
// int main (){
 
//     int arr[5]={1,2,3,4,5};
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

//     return 0;

// }


#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter range ";
    cin >> n;
 
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    return 0;

}