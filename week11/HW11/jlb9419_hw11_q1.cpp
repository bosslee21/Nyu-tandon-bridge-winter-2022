#include <iostream>
using namespace std;
void printTriangle(int n);
void printOpositeTriangle(int n);
void printRuler(int n);
int main() {

  printTriangle(4);
  printOpositeTriangle(4);
  printRuler(4);
    return 0;
}

void printTriangle(int n) {
    if(n == 0) {
        return;
    }
    else {
        printTriangle(n - 1);
        for(int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;

    }
}

void printOpositeTriangle(int n) {
    if(n == 0) {
        return;
    }
    else{
        for(int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
        printOpositeTriangle(n-1);
        
        for(int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printRuler(int n) {
    if (n < 1) {
        return;
    } else {
        printRuler(n - 1);

        for (int i = 0; i < n; i++) {
            cout << '-';
        }
        cout << endl;
        
        printRuler(n - 1);
    }
}
