#include <iostream>
using namespace std;
const int DOLLAR = 100;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int main()
{
    int dollar, cent;

    cout << "Please enter your amount in the format of dollars and cent separated by a space" << endl;

    cin >> dollar >> cent;

    cout << dollar << " dollars and " << cent << " cents are: " << endl;

    //total
    int total = DOLLAR * dollar + cent;

    int quarter, dime, nickel, penny;

    total -= QUARTER * (quarter = total / QUARTER);
    total -= DIME * (dime = total / DIME);
    total -= NICKEL * (nickel = total / NICKEL);
    penny = total;

    cout << quarter << " quarters " << dime << " dimes " << nickel << " nickels and " << penny << "pennies" << endl;

    return 0;
}