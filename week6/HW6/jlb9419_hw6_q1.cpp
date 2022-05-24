#include <iostream>
using namespace std;
int fib(int n);
int main() {
    int num;
    cout << "Please enter a positive integer: ";
    cin >> num;

    cout << fib(num) << endl;


    return 0;
}
int fib(int n) {
    int temp1 = 0;
    int temp2 = 1;
    int sum = 0;
    int count = 0;
    while(n > count) {
        sum = temp1 + temp2;
        temp2 = temp1;
        temp1 = sum;
        count++;
       
        
    }

    return sum;

}