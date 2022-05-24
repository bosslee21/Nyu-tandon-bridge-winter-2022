#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str);
int main() {
    string input;
    cout << "Please enter a word: ";
    cin >> input;
    
    if(isPalindrome(input)) {
        cout << input << " is a palidrome " << endl;
    }
    else{
        cout << input << " is not a palidrome " << endl;
    }
    

    
    return 0;
}

bool isPalindrome(string str) {
    int length = str.length() - 1;
    
    // the length can also be length / 2 since palindrome words / 2 is the same.
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[length - i]) {
            return true;
        }
        else {
            return false;
        }
    }
    

}