#include <iostream>
#include <string>

using namespace std;

int main() {
    int inputNumber;
    string binString = ""; // output binary

    cout << "Please enter a postive number: " << endl;
    cin >> inputNumber;
    
    int remainder;
    while(inputNumber > 0) {
        remainder = inputNumber % 2;
        binString = to_string(remainder) + binString;
        inputNumber = inputNumber / 2;
    }

    cout << binString << endl;
    return 0;
}