#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Please enter a sequence of positive integers, each one in a separate line." << endl;
    cout << "End your sequence by typing -1" << endl;
    cin >> input;
    int countEven = 0;
    while(input != -1) {
        int even = 0;
        int odd = 0;
       
        while(input > 0) {
            int remainder = input % 10;
            if(remainder % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
            input /= 10;
        }
        if(even > odd) {
            countEven++;
        }
        cin >> input;
    }
    cout << "You entered " << countEven << " more -even numbers." << endl;
    
    


    return 0;
}