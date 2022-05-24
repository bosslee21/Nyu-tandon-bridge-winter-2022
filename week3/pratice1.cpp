#include <iostream>
#include <string>
using namespace std;

int main()
{
    int pocket;
    string color;

    cout << "Enter the pocker number: " << endl;
    cin >> pocket;

    if (pocket == 0)
    {
        color = "Green";
    }
    else if (pocket <= 10)
    {
        if (pocket % 2 == 1)
        {
            color = "Red";
        }
        else
        {
            color = "Black";
        }
    }
    else if (pocket <= 18)
    {
        if (pocket % 2 == 1)
        {
            color = "Black";
        }
        else
        {
            color = "Red";
        }
    }
    else if (pocket <= 28)
    {
        if (pocket % 2 == 1)
        {
            color = "red";
        }
        else
        {
            color = "black";
        }
    }
    else if (pocket <= 36)
    {
        if (pocket % 2 == 1)
        {
            color = "Black";
        }
        else
        {
            color = "Red";
        }
    }
    else
    {
        cout << "Invalid input. Please enter pocket number between 0-36" << endl;
    }
    cout << "Pocket number is " << pocket << " and color is: " << color << endl;
    

    return 0;
}