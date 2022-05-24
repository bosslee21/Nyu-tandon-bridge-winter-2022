#include <iostream>
#include <string>
using namespace std;
string translateLine(string line);
bool checkHasOnlyDigit(string word);
string changeWordtoX(string word);

int main()
{
    string line;
    cout << "Please enter a line of text: " << endl;
    getline(cin, line);

    cout << translateLine(line) << endl;
   

    return 0;
}

string translateLine(string line) {
    char space = ' ';  
    int index = 0;
    string word;
    
    string wordToLine;
    for(int i = 0; i < line.length(); i++) {
        if(line[i] == space) {
            word = line.substr(index, i - index);
            wordToLine += changeWordtoX(word) + space;
            index = i + 1; 
        }
    }
    //last word does not contain space. so get the last word and check to see if it has digit and concatenate to wordToline
    word = line.substr(index, line.length() - index);
    wordToLine += changeWordtoX(word);
    return wordToLine;
}

bool checkHasOnlyDigit(string word) {
    for(int i = 0; i< word.length(); i++) {
        if(word[i] < '0' || word[i] > '9' ) {
            return false;
        }
    }
    return true;
}

string changeWordtoX(string word) {
    string changeToX;
    if(checkHasOnlyDigit(word)) {
        for(int i = 0; i < word.length(); i++) {
            changeToX += "x";
        }
    }
    else{
        changeToX += word;
    }
    return changeToX;

}