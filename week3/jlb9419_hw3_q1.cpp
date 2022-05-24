#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// need the last total price to one more digit.

int main()
{
    int item1, item2, basePrice;
    double tax, discount, discountTotal, totalPrice;
    string clubCard;

    cout << "Enter price of first item: ";
    cin >> item1;
    cout << "Enter price of second item: ";
    cin >> item2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;
    cout << "Enter tax rate, e.g 5.5 for 5.5% tax: ";
    cin >> tax;

    basePrice = item1 + item2;

    cout << "Base Price: " << basePrice << endl;

    if (clubCard == "Y" || clubCard == "y")
    {
        if (item1 > item2)
        {
            item2 = item2 / 2;
            discount = (item1 + item2) * .10;
            discountTotal = (item1 + item2) - discount;
            totalPrice = discountTotal + (discountTotal * (tax / 100));
            cout << "Price after discounts: " << discountTotal << endl;
            cout << fixed << showpoint << setprecision(5);
            cout << "Total price: " << totalPrice << endl;
        }
        else
        {
            item1 = item1 / 2;
            discount = (item1 + item2) * .10;
            discountTotal = (item1 + item2) - discount;
            totalPrice = discountTotal + (discountTotal * (tax / 100));
            cout << "Price after discounts: " << discountTotal << endl;
            cout << fixed << showpoint << setprecision(5);
            cout << "Total price: " << totalPrice << endl;
        }
    }
    else if (clubCard == "N" || clubCard == "n")
    {
        if (item1 > item2)
        {
            item2 = item2 / 2;
            totalPrice = item1 + item2 + ((item1 + item2) * tax / 100);
            cout << fixed << showpoint << setprecision(5);
            cout << " Total Price: " << totalPrice << endl;
        }
        else
        {
            item1 = item1 / 2;
            totalPrice = item1 + item2 + ((item1 + item2) * tax / 100);
            cout << fixed << showpoint << setprecision(5);
            cout << " Total Price: " << totalPrice << endl;
        }
    }
    else
    {
        cout << "Error please indicate if you have an membership or do not have an membership" << endl;
    }

    return 0;
}