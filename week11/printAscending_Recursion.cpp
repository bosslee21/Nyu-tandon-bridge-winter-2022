/* wrtue recursive implmenetion function:
void printAsc(int start, int end);
printAsc(1,4) >> 1,2,3,4
2 steps
base case: define what is input size. 
printAsc(3,6) > n = 4  (3,4,5,6)

*/
// start = 1 end = 4  (1,2,3,4) n = 4
// 
#include <iostream>
using namespace std;
void printAsc(int start, int end);
int main() {
    int startNum;
    int endNum;
    cout << "please enter a number to start: " << endl;
    cin >> startNum;
    cout << "please enter a number to end: " << endl;
    cin >> endNum;

    printAsc(startNum, endNum);

    return 0;
}
void printAsc(int start, int end) {
    if(start == end) {
        cout << start << endl;
    }
    else {
        //prinstAsc(1,3)
        printAsc(start, end - 1);
        cout << end << endl;
        
    }
}