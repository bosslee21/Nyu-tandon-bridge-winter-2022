#include <iostream>
#include <string>
using namespace std;
string reverseString(string str);
int main() {
    
    cout << reverseString("are");

    return 0;
}


string reverseString(string str) {
    if(str.length() == 0) {
        return "";
    }
    return reverseString(str.substr(1,str.size())) + str[0];

    
}