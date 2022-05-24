/* Question 1:
Write two versions of a program that reads a positive integer n, and prints the first n even numbers. */

#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Please enter a postive number: ";
    cin >> input;

    cout << "Section A while loop " << endl;
    int count = 1;
    while (count <= input)
    {
        cout << count * 2 << endl;
        count++;
    }

    cout << "Section B for loop" << endl;
    for (int i = 1; i <= input; i++)
    {
        cout << i * 2 << endl;
    }

    return 0;
}