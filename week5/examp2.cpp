#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Please enter integer that will serve maximum possiable number of stars in a row" << endl;
    cin >> input;

   for(int i = 1; i <= input; i++) {
       for(int j = input; j > i; j--) {
           cout << " ";
       }
       for(int k = 1; k <= i; k++) {
           cout << "* ";
       }
       cout << endl;
   }

   for(int i = input; i >= 1; i--) {
       for(int j = 1; j <= input - i; j++){
           cout << " ";
       }
       for(int k = 1; k <= i; k++) {
           cout << "* ";
       }
       cout << endl;
   }

 


}