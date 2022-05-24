/* Question 4: Write two versions of a program that reads a sequence of positive integers from the user,
calculates their geometric mean, and print the geometric mean. */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Section A " << endl;

    int lSequence;
    cout << "Please enter the length of the sequence: ";
    cin >> lSequence;

    int sequence;
    int product = 1;
    cout << "Please enter your sequence: " << endl;
    for (int i = 0; i < lSequence; i++)
    {
        cin >> sequence;
        product *= sequence;
    }

    double geometricMean = pow(product, 1.0 / lSequence);
    cout << fixed << showpoint << setprecision(4);
    cout << "The geometric mean is: " << geometricMean << endl;

    cout << "Section B " << endl;

    cout << "Please enter a non-empty sequence of positive integers, each one in a separted line. End your sequence by typing -1: " << endl;

    int sequence2;
    int product2 = 1;
    int lSequence2 = 0;
    while (sequence2 != -1)
    {
        cin >> sequence2;
        if (sequence2 != -1)
        {
            product2 *= sequence2;
            lSequence2++;
        }
    }

    double geometricMean2 = pow(product2, 1.0 / lSequence2);
    cout << fixed << showpoint << setprecision(4);
    cout << "The geometic mean is: " << geometricMean2 << endl;

    return 0;
}
