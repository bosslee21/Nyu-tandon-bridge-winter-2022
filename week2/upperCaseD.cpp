#include <iostream>
using namespace std;

int main()
{

    char userInput;

    cout << " Please enter a character" << endl;
    cin >> userInput;
    if (userInput >= 'a' && userInput <= 'z')
        cout << userInput << " is a lower case letter"<<endl;

    else if (userInput >= 'A' && userInput <= 'Z')

        cout << userInput << " Is a upper case letter"<<endl;

    else if (userInput >= '0' && userInput <= '9')
        cout << userInput << " Is a Digit"<<endl;

    else
        cout << userInput << " Is a not alpha -numeratic Character"<< endl;

    return 0;
}