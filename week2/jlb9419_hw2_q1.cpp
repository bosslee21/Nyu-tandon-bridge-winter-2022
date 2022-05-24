#include <iostream>
using namespace std;

const int DOLLAR = 100;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int main()
{
    int quarter, dime, nickel, penny;

    int total;
    int dollar;
    int cent;

    cout << "Please enter number of coins: " << endl;

    cout << "# of quarters: ";
    cin >> quarter;

    cout << "# of dimes: ";
    cin >> dime;

    cout << "# of nickels: ";
    cin >> nickel;

    cout << "# of pennies: ";
    cin >> penny;

    total = (QUARTER * quarter) + (DIME * dime) + (NICKEL * nickel) + penny;

    dollar = total / DOLLAR;
    cent = total % DOLLAR;

    cout << "The total is " << dollar << " dollars and " << cent << " cents" << endl;

    return 0;
}