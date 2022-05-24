#include <iostream>
using namespace std;

int main() {
    int inputN,inputK;
    cout << "Enter two positive integer N and K " << endl;
    cin >> inputN >> inputK;
    
    

    int sumN = 1;
    for(int i = inputN; i > 0; i--) {
        sumN *= i;
    }
    int sumK = 1;
    for(int i = inputK; i > 0; i--) {
        sumK *= i;
    }
    
    int nFact = 1;
    for(int i = 1; i <= inputN - inputK; i++) {
        nFact *= i;
    }

    int facotrial = sumN / (sumK * nFact);
    cout << facotrial << endl;
    
    return 0;
}