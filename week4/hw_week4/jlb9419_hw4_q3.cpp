/* Question 3
Write a program that reads from the user a positive integer (in a decimal representation), and prints its binary (base 2) representation. */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input;
    cout << "Enter decimal number" << endl;
    cin >> input;

    string bin = "";
    if (input > 0)
    {
        while (input > 0)
        {
            int remain = input % 2;
            bin = to_string(remain) + bin;
            input /= 2;
        }
    }
    else
    {
        cout << "Error. Please enter a decimal number greater than 0" << endl;
    }
    cout << bin << endl;

    return 0;
}
