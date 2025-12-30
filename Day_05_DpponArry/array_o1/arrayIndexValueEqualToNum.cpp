
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
        if(i==arr[i]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}