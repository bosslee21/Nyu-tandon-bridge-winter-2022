#include <iostream>
#include <string>
using namespace std;

int const ALPHABET = 26;

int countWords(string line);
void countCharOcurr(string line);

int main() {
    string line;
    cout << "Please enter a line of text: " << endl;
    getline(cin, line);

    int wordCount = countWords(line);
    cout << wordCount << "\t" << "words" << endl;

    countCharOcurr(line);

    return 0;

}

// returns number of words in str
int countWords(string line)
{
    int wc = 0; // word count
    bool isWord = true;
 
    for(int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ' || line[i] == '.' || line[i] == ',')
            isWord = true;
 
        // If next character is not a word separator and
        // increment word count
        else if (isWord)
        {
            isWord = false;
            wc++;
        }
    }
    return wc;
}

void countCharOcurr(string line) {
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