#include<iostream>
using namespace std;

int main()
{
    int a[5] = {2,4,6,8,10};
    int low = 0, high = 4, mid, key = 4;
    bool found = false;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            cout << "Element found";
            found = true;
            break;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == false)
        cout << "Element not found";

    return 0;
}