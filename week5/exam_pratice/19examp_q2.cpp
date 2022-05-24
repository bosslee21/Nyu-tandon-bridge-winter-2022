#include  <iostream>
using namespace std;

int main () {
    int sequenceEnter;
    cout << "how many sequence do you wish to enter" << endl;
    cin >> sequenceEnter;

    cout << "Please enter " << sequenceEnter << " lines, each with a sequence of positive integers. For each sequence, separate the" << endl;
    cout << "element by a space, and end it by typing -1:" << endl;

    int sequence;
    int countSequence = 1;
    
    int even = 0;
    int odd = 0;
    for(int i = 0; i < sequenceEnter; i++) {
        cout << "Sequence #" << countSequence << ": ";
        int countDigit = 0;
        bool isFalse = false;
        countSequence++;
        while(isFalse == false) {
            cin >> sequence;
            if(sequence != -1) {
                countDigit++;
            }
            else {
                isFalse = true;
            }
        }
        if(countDigit % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "there were " << even << " even number of elements, " << odd << " with odd number of elements " << endl;

    return 0;
}