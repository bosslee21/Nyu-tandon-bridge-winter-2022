/* Question 4:
Define the following constants:
const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;
Write a program that asks the user to enter a Real number, then it asks the user to enter the
method by which they want to round that number (floor, ceiling or to the nearest integer).
The program will then print the rounded result. */
#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{
    //variable declare
    double inputNum;
    int method;

    //input from user
    cout << "Please enter a Real number: " << endl;
    cin >> inputNum;

    cout << " Choose your rounding method: " << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> method;

    
    int firstInteger = (int)inputNum;
    double secondInteger = inputNum - firstInteger;
   
    
    int result;
    
    switch (method)
    {
    case FLOOR_ROUND:
        if(inputNum < 0) {
            result = firstInteger + -1;
        }
        else {
            result = firstInteger;
        }
        break;
    case CEILING_ROUND:
        if(inputNum <0) {
            result = firstInteger;
        }
        else {
            result = firstInteger + 1;
        }
        break;

    case ROUND:
        if(inputNum < 0 && secondInteger < -0.50) {
            result = firstInteger + -1;
        }
        else if(inputNum < 0 && secondInteger > -0.50) {
            result = firstInteger;
        }
        else if(inputNum > 0 && secondInteger < 0.50) {
            result = firstInteger;
        }
        else{
            result = firstInteger +1;
        }
    default:
        break;
    }

    cout<< result<<endl;
    







    

    return 0;
}

/* switch (method)
    {

    case FLOOR_ROUND:
        if (inputNum < 0)
        {
            finalNum = int(inputNum) - 1;
        }
        else
        {
            finalNum = int(inputNum);
        }

        break;
    case CEILING_ROUND:
        if (inputNum < 0)
        {
            finalNum = int(inputNum);
        }
        else
        {
            finalNum = int(inputNum);
        }
        break;
    case ROUND:
        if (inputNum > 0)
        {
            finalNum = (int)(inputNum + 0.5);
        }
        else
        {
            finalNum = (int)(inputNum - 0.5);
        }
        break;

    default:
        break;
    }
    cout << finalNum << endl; */