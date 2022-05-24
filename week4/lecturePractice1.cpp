#include <iostream>
using namespace std;

/*  counting and  summing digits*/
int main() {
    int num;
    int sumDigits, countDigits;
    int currDigit;

    cout << "enter a positive integer: " << endl;
    cin >> num;

    sumDigits = 0;
    countDigits = 0;

    while(num >= 0) {
        currDigit  = num % 10;
        countDigits++;
        sumDigits += currDigit;
        num = num / 10;


    }

    return 0;

}