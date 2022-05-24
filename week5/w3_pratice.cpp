#include <iostream>
using namespace std;

int main()  {
    int input;
    cout << "Please enter a positive integer: " << endl;
    cin >> input;

    for(int row = 1; row <= input; row++) {
        for(int i = 1; i <= row; i++) {
            cout << i;
        }
        cout << endl;
    }



    return 0;
}