// #include <iostream>
// #include <vector>
// #include <algorithm>     
// using namespace std;
// int main(){
//     vector <int > v;
    
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     int n =v.size();

//     int i = 0;
//     int j=0;
//     for (int i = 0;i <n; i++){
        
//         if (v[i]<v[i-1]){
//             return false;


            
//         }
//     }
//     for (int i = 0;i <n; i++){
//         cout<<v[i]<<endl;
//     }

// }




#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 4, 1, 3};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}