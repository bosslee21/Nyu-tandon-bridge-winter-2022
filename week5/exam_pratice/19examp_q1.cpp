#include <iostream>
using namespace std;

int main() {

    int input;
    cout << "Please enter a positive integer:" << endl;
    cout << endl;
    cin >> input;

    for(int i = 0; i < input; i++) {
        for(int j = 0; j < input; j++) {
            if(i % 2 == 0) {
                cout << "*";
            }
            else {
                cout << "#";
            }
        }
        cout << endl;
    }


    return 0;
}