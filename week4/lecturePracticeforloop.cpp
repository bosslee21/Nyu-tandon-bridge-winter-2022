#include <iostream>
using namespace std;

int main() {
    
    int num, sum;
    int count = 0;
    cout << "Enter number to count backward and sum" << endl;
    cin >> num;

    sum = 0;
    for(int i = num; i > 0; i--) {
        sum += num;
        count++;
        num--;
    } 
    cout << "Sum of the number is " << sum << " and there is " << count << " integers " << endl;

   



    return 0;
}