#include <iostream>
using namespace std;


int main() {
    int input = 0;
    cout << "Please enter  positive number: " << endl;
    cin >> input;
    
    for(int i = 1; i <= input; i++) {
        for(int j = 1; j <= input - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = input -1; i >= 1; i--) {
        for(int j = 1; j <= input - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }


    return 0; 
}