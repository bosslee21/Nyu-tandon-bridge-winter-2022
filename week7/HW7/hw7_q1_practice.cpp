#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
int main() {
    int input;
    int countDiv = 0;
    int sumDiv = 0;

    cout << "Please enter a positive integer  >= 2 : " << endl;
    cin >> input;
    
    int sum = 1;
    
    for(int i = 2; i <= sqrt(input); i++) {
        if(input % i == 0){
            cout << i << endl;
            cout << input / i << endl;
        }
    }
    

 // amicable number need to be implement
    return 0;
}



