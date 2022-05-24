#include <iostream>
#include <string>
using namespace std;

const int TWELVEHOURS = 12;

int main()
{
    int hour24, minutes24;
    int hour12, minutes12;
    string period;
    char temp;

    cout << "Please enter time in 24 hour format" << endl;
    cin >> hour24>> minutes24;

    minutes12 = minutes24;

    if(hour24 >= 0 && hour24 <= 11) {
        period = "AM";
        if(hour24 == 0)
            hour12 =12;
        else
            hour12 = hour24;
    }
    else{
        period = "pm";
        if(hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 -12;
    
    }   
    cout<< hour24 << " : "<<minutes12 << period << " is " << hour12<< " : "<< minutes12<< " " << period << " ." <<endl;
}