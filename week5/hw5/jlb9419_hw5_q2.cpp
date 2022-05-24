#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    
    int randomNumber = (rand() % 100) + 1;
    int min = 1;
    int max = 100;
    int guessLeft = 5;
     cout << randomNumber << " placeholder" << endl;
    int inputGuess;
    
    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;
    cout << "Range: [" << min << "," << max << "], Number of guess left: " << guessLeft << endl;
    cout << "your guess: ";
    cin >> inputGuess;
    
    

    int guessCount = 1;

    
    

    while(inputGuess != randomNumber && guessLeft > 1) {
        
        if(inputGuess > randomNumber) {
            cout << "Wrong! My number is smaller." << endl;
            guessLeft--;
            guessCount++;
            if(inputGuess < max) {
                 max = inputGuess - 1;;
            }
        }
        
        
        else{
            cout << "Wrong my number is bigger." << endl;
            guessLeft--;
            guessCount++;
            if(inputGuess > min) {
                min = inputGuess + 1;
            }
            
            
        }
        cout << endl;

        cout << "Range: [" << min << "," << max << "], Number of guess left: " << guessLeft << endl;
        cout << "your guess: ";
        cin >> inputGuess;

    }
    if(inputGuess == randomNumber && guessCount <= 5) {
        cout << "Congrat! You guessed my number in "<<  guessCount << " guesses. " << endl;

    }
    if(inputGuess != randomNumber && guessCount == 5) {
        cout << "out of guesses! My number is " << randomNumber << endl;
    }

   




    return 0;
}