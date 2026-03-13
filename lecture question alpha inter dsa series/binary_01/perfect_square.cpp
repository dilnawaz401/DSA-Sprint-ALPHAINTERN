#include<iostream>
using namespace std;

bool isPerfectSquare(int num)
{
    long long low = 1, high = num, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(mid * mid == num)
            return true;
        else if(mid * mid < num)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

int main()
{
    int num = 16;

    if(isPerfectSquare(num))
        cout << "Perfect Square";
    else
        cout << "Not Perfect Square";

    return 0;
}