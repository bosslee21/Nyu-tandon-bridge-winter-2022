#include <iostream>
#include <string>
using namespace std;
int const ALPHABET = 26;
int countWordInLine(string line);
void countLetterinLine(string line);
int main() {
    string line;
    cout << "Please enter a line of text: " << endl;
    getline(cin, line);

    int wordCount = countWordInLine(line);
    cout << wordCount << "\t" << "words" << endl;

    countLetterinLine(line);

    return 0;

}

int countWordInLine(string line) {
    int wordCount = 0;
    for(int i = 0; i < line.length(); i++) {
        if(line[i] == ' ' || line[i] == ','|| line[i]== '.') {
            wordCount++;
        }
    }
    return wordCount;
}

void countLetterinLine(string line) {
    int newArr[ALPHABET] = {};
    

    for(int i = 0; i < line.length(); i++) {
        if((line[i] >= 'a') && (line[i] <= 'z')) {
            newArr[line[i] - 'a']++;
        }
        else if((line[i] >= 'A') && (line[i] <= 'Z')) {
            newArr[line[i] - 'A']++;
        }
    }

    for(int i = 0; i < ALPHABET; i++) {
        if(newArr[i] > 0) {
            cout << newArr[i] << "\t" << (char)('a' + i) << endl;
        }
    }
 
}