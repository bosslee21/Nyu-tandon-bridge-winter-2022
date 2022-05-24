#include <iostream>
using namespace std;

const int INCH_TO_FOOT = 12;
const int FEET_TO_YARD = 3;

int main() {
    
    int input; 
    int days = 1;
    cout << "Enter the number of inches the snail traved in day #" << days << "," << endl;
    cout << "or type -1 if they reached their destination: " << endl;
    cin >> input;

    int product = 0;
    while(input != -1) {
        product += input;
        days++;

        cout << "Enter the number of inches the snail traved in day #" << days << "," << endl;
        cout << "or type -1 if they reached their destination: " << endl;
        cin >> input;
    }  
    
    int yard = product / (INCH_TO_FOOT * FEET_TO_YARD);
    int remainder = product % (INCH_TO_FOOT * FEET_TO_YARD);
    int feet = remainder / INCH_TO_FOOT;
    remainder %= INCH_TO_FOOT;

    cout << "in "<< days - 1 << " days, the snail traveled " << yard << " yards, " << feet << " feet and " << remainder << " inches." ;
    

    
    



    return 0;
}