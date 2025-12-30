
// #include <iostream>
// using namespace std;

// int main() {
   
//     int N;
//     cout << "Enter the number of elements: ";
//     cin >> N;
//      int arr[N];
//     for(int i = 0; i < N; i++) {
//         cin>> arr[i] ;
//     }
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//                 if(arr[i]==arr[j]){
//                      cout<<"duplicate"<<endl;
//                      break
//                 }
//                 else {
//                     cout<< "no dublicate "<<endl;
                    
//                 }
//             }

//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set<int> s;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (s.count(arr[i])) {
            cout << "Duplicate found: " << arr[i];
            found = true;
            break;
        }
        s.insert(arr[i]);
    }

    if (!found)
        cout << "No Duplicate";

    return 0;
}