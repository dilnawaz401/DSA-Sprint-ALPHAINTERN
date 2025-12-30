
#include <iostream>
#include  <vector>
using namespace std;

int main() {
    int arr[5] = {5, 2, 4, 1, 3};
    int n = 5;

    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            cout<< false << endl; 
                
        }
        
    }
    cout << "Sorted Array: ";
    int i=0;
    int j = n-1;
    for (int i = 0; i < n; i++) {
  
    while (i<=j){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
        cout << arr[i] << " ";
    }
}
    return 0;
}