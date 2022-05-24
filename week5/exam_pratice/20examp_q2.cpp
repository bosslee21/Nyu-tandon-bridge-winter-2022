#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Pleae enter a sequence of positive integers, each one in a separate line." << endl;
    cout << "End your sequence by typing -1:" << endl;
    cin >> input;

    int moreEvenNumber = 0;
    //320
    while(input != -1) {
        int evenDigit = 0;
        int oddDigit = 0;
        
        while(input > 0) {
            int digit = input % 10;
            if(digit % 2 == 0) {
                evenDigit++;
            }
            else{
                oddDigit++;
            }
            input /= 10;



        }
        if(evenDigit > oddDigit) {
            moreEvenNumber++;
        }
        cin >> input;
        
       
        

    }
    cout << "You entered " << moreEvenNumber << " more-even numbers" << endl;

    

    return 0;

}