#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Please enter a postive integer: " << endl;
    cin >> input;

    for(int row = 0; row < input; row++) {
        for(int i = 0; i < input; i++) {
           if((row % 2 == 0 && i % 2 == 0)|| (row % 2 == 1  && i % 2 == 1) ){
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