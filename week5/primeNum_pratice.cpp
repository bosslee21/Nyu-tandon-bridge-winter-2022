#include <iostream>
using namespace std;

int main() {

    int input;
    cout << "Enter a integer to check if its a prime number: " << endl;
    cin >> input;
    
    bool isPrime = true;
    // 7/ 2 = 3
    // i =3 
    for(int i = 2; i<= input /2; i++) {
        if(input % i == 0) {
            isPrime = false;
            break;
        }

    }
    if(isPrime) {
        cout << input << " is a prime number" << endl;
    }
    else {
        cout << input << " is not a prime number" << endl;
    }




    return 0;
}