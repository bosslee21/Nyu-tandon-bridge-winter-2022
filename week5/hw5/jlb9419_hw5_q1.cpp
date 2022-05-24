#include <iostream>
using namespace std;

int main() {
    int userInput;
    cout << "Please enter a positive integer: " << endl;
    cin >> userInput;

    for(int row = 1; row <= userInput; row++) {
        for(int i = 1; i <= userInput; i++) {
            cout << row * i << "\t";
        }
        cout << endl;
    }

    return 0;
}