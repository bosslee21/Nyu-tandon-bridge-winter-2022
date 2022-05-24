#include <iostream>
using namespace std;
int sum(int n);
int main() {
    int num;
    cout << "please enter a number to sum: " << endl;
    cin >> num;

    int total = sum(num);
    cout << "The total sum of number " << num << " is " << total << endl;
    
    return 0;
}

int sum(int n) {
    int total = 0;
    if(n != 0) {
       return total = n + sum(n - 1);
    }
    else{
        return n;
    }
}