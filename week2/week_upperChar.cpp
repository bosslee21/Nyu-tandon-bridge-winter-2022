#include <iostream>
using namespace std;

int main() {
    char lowerCase,upperCase;
    int offset;
    cout<< " Please enter a lower case letter" <<endl;
    cin>> lowerCase;

    offset = (int)(lowerCase - 'a5');
    upperCase = (char)('A' + offset);

    cout<< " The upper case of " << lowerCase<< " is" << upperCase<<endl;
    

    return 0;
}