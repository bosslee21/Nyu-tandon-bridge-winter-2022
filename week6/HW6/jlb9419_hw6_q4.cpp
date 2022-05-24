#include <iostream>
#include <cmath>
using namespace std;
void printDivisors(int num);
void printDivisor2(int num);
int main() {
    int input;
    cout << "Please enter a positive integer >= 2: ";
    cin >> input;


    printDivisors(input);
    printDivisor2(input);
    return 0;
}
void printDivisors(int num) {
    for(int i = 1; i <= num; i++) {
        if(num %  i == 0) {
            cout << i << " ";
        }
    
    }
    cout << endl;
}
void printDivisor2(int num) {
    for(int i = 1; i < sqrt(num); i++) {
        if(num % i == 0) {
            cout << i << " ";
        }
    }
    for(int i = sqrt(num); i >= 1; i--) {
        if(num % i == 0) {
            cout << num / i << " ";
        }

    }
    cout << endl;
}