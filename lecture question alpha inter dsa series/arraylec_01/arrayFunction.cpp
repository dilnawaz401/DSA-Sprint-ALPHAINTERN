#include <iostream>
using namespace std;
void display (int a[],int size){
    for(int i=0,i =size ,i++){
        cout<< a[i]<<endl;
    }
}
    int main(){
    int arr[]={2,3,5,6,};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    display(arr , size);
    

}