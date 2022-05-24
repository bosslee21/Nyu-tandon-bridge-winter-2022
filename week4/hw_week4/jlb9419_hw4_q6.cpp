/* Question 6: Write a program that asks the user to input a positive integer n, and print all of the numbers
from 1 to n that have more even digits than odd digits. */
#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Please enter a positive integer: ";
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        int oddNumber = 0;
        int evenNumber = 0;
        int currentNumber = i;

        while (currentNumber > 0)
        {
            int digit = currentNumber % 10;
            if (digit % 2 == 0)
            {
                evenNumber++;
            }
            else
            {
                oddNumber++;
            }
            currentNumber /= 10;
        }
        if (evenNumber > oddNumber)
        {
            cout << i << endl;
        }
    }

    return 0;
}