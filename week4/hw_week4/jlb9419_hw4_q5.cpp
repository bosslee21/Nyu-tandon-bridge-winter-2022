/* Question 5: Write a program that asks the user to input a positive integer n, and prints a textual image of an
hourglass made of 2n lines with asterisks. */
#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a positive integer" << endl;
    cin >> input;
    if (input <= 0)
    {
        cout << "Invalid, Please enter a positive integer." << endl;
    }
    else
    {
        for (int i = input; i >= 1; i--)
        {
            for (int j = 1; j <= input - i; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }

        for (int i = 1; i <= input; i++)
        {
            for (int j = 1; j <= input - i; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}