#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int PIN_SIZE = 5;
const int PIN[PIN_SIZE] = {1,2,3,4,5};
const int NUM_SIZE = 10;

bool pinVerify(int num[], string userPin);

int main()
{
    srand(time(0)); 

    cout << "Please	enter your PIN according to the following mapping:\n";
    cout << "PIN:  0 1 2 3 4 5 6 7 8 9" << endl;

    int numArr [NUM_SIZE]; 
    cout << "NUM:  ";
    for (int i = 0; i < NUM_SIZE; i++) {
		numArr[i] = (rand() % 3) + 1;
        cout << numArr[i] << ' ';
	}
    cout << endl;

    string userPin;
    cin >> userPin;

    if (pinVerify(numArr, userPin))
        cout << "Your PIN is correct\n";
    else
        cout << "Your PIN is not correct\n";

    return 0;
}

bool pinVerify(int num[], string userPin) {
    string correctPin;
    for (int i = 0; i < PIN_SIZE; i++)  
        correctPin += to_string(num[PIN[i]]);
    
    if (correctPin == userPin)
        return true;
    else
        return false;
}