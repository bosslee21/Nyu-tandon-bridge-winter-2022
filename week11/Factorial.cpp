#include <iostream>
using namespace std;
int recursion(int n);

int main() {
    int input;
    cout << "please enter a number : " << endl;
    cin >> input;

    int sum = recursion(input);
    cout << "The factorial of " << input << " is " << sum << endl;

    return 0;
}



int recursion(int n) {
    // int sum = n;
    if(n == 0) {
        return 1;
    }
    else{
        return n * recursion(n - 1);
        // sum *= recursion(n - 1);
        
    }
    
    // return sum;

}