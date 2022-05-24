#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);
int main() {
    int triangleInput;
    char symbol;
    cout << "Please enter a tringle size: ";
    cin >> triangleInput;
    cout << "Please enter a symbol: ";
    cin >> symbol;

    
    printPineTree(triangleInput, symbol);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1 ; j <= m; j++) {
            cout << " ";
        }
        for(int h = 1; h <= n - i ; h++) {
            cout << " ";
        }

        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << symbol;
        }
        cout << endl;
    }  
}

void printPineTree(int n, char symbol) {
    for(int i = 1; i <= n; i++) {
        printShiftedTriangle(i + 1, n - i, symbol);
    }


    
}