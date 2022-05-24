#include <iostream>
using namespace std;

// line input * 2 + 1;
// line 2* input +1 

// input > star maximum
int main() {
    int input;
    cout << "Please enter a integer" << endl;
    cin >> input;
// space =4
    int space = input;
    //  0
    int star = input - space;

    for(int i = 0; i < 2 * input + 1; i++) {
        for(int j = 0; j <= space; j++) {
            cout << " ";
        }
        for(int k = 0; k < star; k++) {
            cout << "* ";
        }
        if(i < input) {
            space--;
            star++;
        }
        else {
            space++;
            star--;
        }
        cout << endl;
    }


    return 0;
}