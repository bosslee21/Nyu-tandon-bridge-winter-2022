#include <iostream>
#include <stack>
#include <fstream>
#include <string>


using namespace std;
void openInputFile(ifstream& inFile);

bool isPascal(ifstream& inFile);

int main() {
    ifstream inFile;

    openInputFile(inFile);

    if(isPascal(inFile)) {
        cout << "valid Pascal code " << endl;
    }
    else {
        cout << "Invalid Pascal code does not Match!" << endl;
    }


    return 0;
}

void openInputFile(ifstream& inFile) {
    string fileName;

    cout << "please enter a file name" << endl;
    cin >> fileName;
    inFile.open(fileName);
    
    while(!inFile) {
        cout << "Error! Please re-enter file name" << endl;
        cin >> fileName;
        inFile.clear();
        inFile.open(fileName);
    }
}

bool isPascal(ifstream& inFile) {
    string word;
    stack<char> letter;


    while(inFile >> word) {
        cout << word << "  ";
        

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
                    if(letter.top() ==  '(') {
                        letter.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(c == ']') {
                    if(letter.top() ==  '[') {
                        letter.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(c == '}') {
                    if(letter.top() ==  '{') {
                        letter.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
    }

    return letter.empty();
    
}