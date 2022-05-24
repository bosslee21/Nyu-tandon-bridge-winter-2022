#include <iostream>
using namespace std;

int main() {
    char inLetter;
    
    cout << "Please enter a lower case Letter: " << endl;
    cin >> inLetter;

    int length = inLetter - 'a';
    
    for(int i = 0; i <= length; i++) {
        for(int k = 1; k <= length - i; k++) {
            cout << " ";
        }
        for(int j = 1; j <= 2 * i + 1; j++) {
            if(i % 2 == 0) {
                cout << char('a' + i);
            }
            else
            {
                cout << char('A' + i);
            }
            
        }
        cout << endl;
    }







}
  