#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int input;
    cout << "Please enter a positive integer" << endl;
    cin >> input;

    int sum = 0;
    while(input > 0) {
        int digit = input % 10;
        sum += digit;
        input /= 10;

    }
    cout << sum << endl;



    return 0;
}