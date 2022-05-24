#include <iostream>
using namespace std;

int const INCH_TO_FEET = 12;
int const FEET_TO_YARD = 3;
int main() {
    
    int days = 1;
    int input;
    cout << "Enter the number of inches the snail travled in day #" << days << "," << endl;
    cout << "or type -1 if they reached their destination:" << endl;
    cin >> input;

    if(input == -1) {
        cout << "In " <<  days << "the snailed did not travel at all" << endl;
    }
    int sum = 0;
    while(input != -1){
        sum += input;
        days++;
        cout << "Enter the number of inches the snail travled in day #" << days << "," << endl;
        cout << "or type -1 if they reached their destination:" << endl;
        cin >> input;
    }
    
    int yard = sum / (INCH_TO_FEET * FEET_TO_YARD);
    sum %= INCH_TO_FEET * FEET_TO_YARD;
    int feet = sum / INCH_TO_FEET;
    sum %= INCH_TO_FEET;
    int inch = sum;

    cout << "In " << days - 1 << " days, the snail traveled " << yard << " yards, " << feet << " feet and " << inch << " inches." << endl;





    
    return 0;

}