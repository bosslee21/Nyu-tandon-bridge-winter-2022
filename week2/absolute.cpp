#include <iostream>
using namespace std;


int main() {
    int userIn,absValue;
    
    cout<< " Please enter an integer: "<<endl;
    cin>> userIn;

    if(userIn < 0)
        absValue = userIn * (-1);
    
    cout<< "Absolute value of "<< userIn<< " is "<< absValue <<endl;




    return 0;

}