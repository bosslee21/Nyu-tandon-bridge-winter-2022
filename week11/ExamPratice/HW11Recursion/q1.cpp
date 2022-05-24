#include <iostream>
using namespace std;
void printTriangle(int n);
void printOpositeTriangles(int n);
int main() {
  // printTriangle(4);
    printOpositeTriangles(4);
    return 0;
}

void printTriangle(int n) {

    if(n == 1) {
        cout << "*" << endl;
        return;
    }
    printTriangle(n - 1);
    for(int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

void printOpositeTriangles(int n) {
    if(n == 1) {
        cout << "*" << endl;
        return;
    }
    for(int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    printOpositeTriangles(n - 1);
    for(int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}