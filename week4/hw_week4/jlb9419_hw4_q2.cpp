/* In this question we will use a simplified version of the Roman Numerals System to represent
positive integers */
#include <iostream>
#include <string>
using namespace std;

const int DIGIT_M = 1000;
const int DIGIT_D = 500;
const int DIGIT_C = 100;
const int DIGIT_L = 50;
const int DIGIT_X = 10;
const int DIGIT_V = 5;
const int DIGIT_I = 1;

int main()
{
    string roman = "";
    int input;
    cout << "Enter a decimal number: " << endl;
    cin >> input;

    int countD = 0;
    int countC = 0;
    int countL = 0;
    int countX = 0;
    int countV = 0;

    int digit = input;

    if (digit <= 0)
    {
        cout << "invalid, Please enter decimal greater than 0 " << endl;
    }
    else
    {
        while (digit > 0)
        {
            if (digit >= DIGIT_M)
            {
                roman += "M";
                digit -= DIGIT_M;
            }
            else if ((digit >= 500) && (countD < 1))
            {
                roman += "D";
                countD++;
                digit -= DIGIT_D;
            }
            else if ((digit >= 100) && (countC < 4))
            {
                roman += "C";
                countC++;
                digit -= DIGIT_C;
            }
            else if ((digit >= 50) && (countL < 1))
            {
                roman += "L";
                countL++;
                digit -= DIGIT_L;
            }
            else if ((digit >= 10) && (countX < 4))
            {
                roman += "X";
                countX++;
                digit -= DIGIT_X;
            }
            else if ((digit >= 5) && (countV < 1))
            {
                roman += "V";
                countV++;
                digit -= DIGIT_V;
            }
            else
            {
                roman += "I";
                digit -= DIGIT_I;
            }
        }
        cout << input << " is " << roman << endl;
    }

    return 0;
}

