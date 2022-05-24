#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName,middleName,lastName;
    cout << "Please enter your name in First, middle, last order: " << endl;
    cin >> firstName >> middleName >> lastName;

    cout << lastName << ", " << firstName << " " << middleName[0] << "." << endl;

    return 0;
}