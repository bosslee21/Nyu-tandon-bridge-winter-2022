#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Please enter a positive integer:" << endl;
    cin >> input;

    for(int i = 0; i < input; i++) {
        for(int j = 0; j < input; j++) {
            if(( i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
                cout << "X";
            }
            else {
                cout << "O";
            }
        }
        cout << endl;
    }



    return 0;
}