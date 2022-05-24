#include <iostream>
using namespace std;


int main() {
    int input;
    cout << "Enter positive integer" << endl;
    cin >> input;

    int digit = 0;
    int sum = 0;
    
    while(input > 0) {
        digit = input % 10;
        sum += digit;
        input /= 10;
       
    }
    cout << sum << endl;
  

    return 0;
}