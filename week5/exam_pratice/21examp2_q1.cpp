#include <iostream>
using namespace std;

int main() {
    char input;
    cout << "Please enter a lower-case letter: " << endl;
    cin >> input;

    int length = input - 'a';

    for(int i = 0; i <= length; i++) {
        for(int j = 0; j <= length - i - 1; j++) {
            cout << " ";
        }
        for(int k = 0; k < 2 * i + 1; k++) {
            if(i % 2 == 0) {
                cout << char('a' + i);
            }
            else{
                cout << char('A' + i);
            }
        }
        cout << endl;
    }

    return 0;
}