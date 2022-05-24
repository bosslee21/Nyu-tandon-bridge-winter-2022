#include <iostream>
using namespace std;

int main() {
    int input;
    cout << " postive :" << endl;
    cin >> input;

    int count = 0;
    //7 
    for(int i = 1; i <= input; i++) {
        if(input % i == 0) {
            count++;
            // 1 , 7
        }
    }
    if(count == 2) {
        cout << input << " is a prime number" << endl;
    }
    else{
        cout << input << " is not a prime number" << endl;
    }

    return 0;
}