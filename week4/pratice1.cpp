#include <iostream>
using namespace std;
/* pratice print all odd number from 1 to 99  except 13*/

int main() {
    for(int i = 1; i < 100; i+= 2 ) {
        if(i == 13) {
            continue;
        }
        else {
            cout << i << endl;
        }
    }



    return 0;

}