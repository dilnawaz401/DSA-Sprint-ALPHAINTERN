// question no.7

// ### **Write a program to input the total amount and percentage and find the final discounted value.**

// (Eg: amount=1000, discount=10 → 900)


#include <iostream>
using namespace std;

int main() {
    float amount, discount, finalAmount;

    cout << "Enter total amount: ";
    cin >> amount;

    cout << "Enter discount percentage: ";
    cin >> discount;

    finalAmount = amount - (amount * discount / 100);

    cout << "Final amount after discount: " << finalAmount;

    return 0;
}
