#include <iostream>
using namespace std;
// 20  > 2 2 5
// factor of n of prime; 
//20 2 2 5
// 10 > 2 5 
// lecture 2/4 professor Ratan Dey.

int main() {
    int input;
    
    cout << "Please enter a postive integer" << endl;
    cin >> input;
    
    for(int i = 2; i <= input; i++) {
        while(input % i == 0 ) {
           cout << i << " " <<endl;
           input /= i; 
        }

    } 
   
    
    



    return 0;
}