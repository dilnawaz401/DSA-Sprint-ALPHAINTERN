

#include <iostream>
using namespace std;

int main() {
   
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
     int arr[N];
     int min =arr[0];
    for(int i = 0; i < N; i++) {
        cin>> arr[i] ;
    }
    for(int i = 0; i < N; i++) {
        if (arr[i]<min){
            min=arr[i];
        }
        
    }
    cout<< "min value = "<<min;

    return 0;
}