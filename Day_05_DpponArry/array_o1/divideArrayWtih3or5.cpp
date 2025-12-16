
#include <iostream>
using namespace std;

int main() {
   
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
     int arr[N];
    for(int i = 0; i < N; i++) {
        cin>> arr[i] ;
    }
    for(int i = 0; i < N; i++) {
        if(arr[i]%3==0&&arr[i]%5==0){
            cout<<arr[i]<<" ";
        }
    }


    return 0;
}