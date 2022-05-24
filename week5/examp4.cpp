#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;
const int YARD_TO_FEET =3;


int main() {
    
    int input;
    int days = 1;
    cout << "Enter the number of inches the snail travled in day #" << days << "," << endl;
    cout << "or type -1 if they reached their desitrnation: " << endl;
    cin >> input;

    int sum = 0;
    while(input != -1) {
        sum += input;
        days++;
        cout << "Enter the number of inches the snail travled in day #" << days << "," << endl;
        cout << "or type -1 if they reached their desitrnation: " << endl;
        cin >> input;
        
        
    }
    int yard = 0;
    int feet = 0; 
    int inch = 0;
    
    while(sum > 0) {
        if(sum >= YARD_TO_FEET * FOOT_TO_INCH) {
            yard++;
            sum -= 36;
        }
        else if( sum >= FOOT_TO_INCH) {
            feet++;
            sum-= 12;
        }
        else {
            inch++;
            sum -= 1;

        }
    }
    cout << "In " << days -1 << " days, the snail travled "<< yard << " yards, " << feet << " feet and " << inch << " inches." << endl;
    
    





    return 0;
}