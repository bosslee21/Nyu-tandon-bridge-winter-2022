#include <iostream>
#include <stack>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    openInputFile(inFile);
    
    if(isPascal(inFile)) {
        cout << "is valid pascal" << endl;
    }
    else {
        cout << "is not pascal" << endl;
    }
    return 0;
}

void openInputFile(ifstream& inFile) {
    string fileName;

    cout << "Please enter your file name to open" << endl;
    cin >> fileName;
    inFile.open(fileName);
    while(!inFile) {
        cout << "Error opening the file retype" << endl;
        cin >> fileName;
        inFile.clear();
        inFile.open(fileName);
    }
}

bool isPascal(ifstream& inFile) {
    string word;
    stack<char> letter;

    while(inFile >> word) {
        if(word == "begin") {
            letter.push('b');
        }
        else if(word == "end" || word == "end.") {
            if(letter.top() == 'b') {
                letter.pop();
            }
            else{
            return false;
            }
        }
        else{
            for(int i = 0; i < word.length(); i++) {
                char c = word[i];
                if(c == '(' || c == '[' || c == '{') {
                    letter.push(c);
                }
                else if(c == ')') {
                    if(letter.top() == '(') {
                        letter.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if(c == ']') {
                    if(letter.top() == '[')  {
                        letter.pop();
                    }
                    else {
                        return false;
                    }
                }
                else if(c == '}') {
                    if(letter.top() == "{") {
                        letter.pop();
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        


    }
    return letter.empty();
}