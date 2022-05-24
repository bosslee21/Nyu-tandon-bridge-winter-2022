#include <iostream>
using namespace std;


int main() {
    int input;
    cout << "Please enter positive number" << endl;
    cin >> input;

    if(input == 2) {
        cout << input << " is a prime number" << endl;
    }

    bool isPrime = true;
    for(int i = 2; i <= input /2; i++ ) {
        if(input % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if(isPrime) {
        cout << input << " is a prime number" << endl;

    }
    else {
        cout << input << " Is not a prime number" << endl;

    }




    return 0;
}