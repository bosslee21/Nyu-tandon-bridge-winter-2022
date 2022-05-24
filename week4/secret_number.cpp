#include <iostream>
#include <stdlib.h> //strang, rand
#include <time.h> // time

using namespace std;

int main() {
    int secretNumber;
    srand(time(NULL)); // intialize random seed
    secretNumber = rand() % 20 + 1; // generate secret number between 1 and 20

    int userGuess;
    cout << " Please guess the secret number 1 - 20 : " << endl;
    cin >> userGuess; 

    while(userGuess != secretNumber) {
        if(userGuess > secretNumber) {
            cout << " secret number is lower " << endl;
            cout << " Guess the number 1 - 20 : " << endl;
            cin >> userGuess; 
        }
        else {
            cout << "secret number is higher" << endl;
            cout << "Guess the number 1 - 20 : " << endl;
            cin >> userGuess; 
            
        }
    }
    cout << "Congradulation you are correct! " << endl;

    return 0;
}