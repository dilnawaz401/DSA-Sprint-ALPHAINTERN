
#include <iostream>
using namespace std;

int main() {
   
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    int arr[N];
    int product = 1;
    for(int i = 0; i < N; i++) {
        cin>> arr[i] ;
    }
    for(int i = 0; i < N; i++) {
        product=arr[i] * product;
    }
    cout<<product;
    

    return 0;
}