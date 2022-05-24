#include <iostream>
using namespace std;
#include <string>

int main() {
    string name;
    cout << "Please enter your name: ";
    getline(cin,name);

    for(int i = name.length() - 1; i >= 0; i--) {
        cout << name[i];
    }

    return 0;
}