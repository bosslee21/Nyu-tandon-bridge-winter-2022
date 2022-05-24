#include <iostream>
using namespace std;

//converting char to ascii value
int main() {
    char inputChar;
    int asciiValue;



    cout<< "Please enter a character"<< endl;
    cin>>inputChar;

    asciiValue = (int)inputChar;

    cout<< "The ascii value of " << inputChar << " is " << asciiValue <<endl;


    return 0;
}