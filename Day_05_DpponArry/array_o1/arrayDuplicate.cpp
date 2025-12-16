
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
        for(int j = 0; j < N; j++) {
                if(arr[i]==arr[j]){
                     cout<<"duplicate"<<"";
                     return 0;
                }
            }

    }
    return 0;
}