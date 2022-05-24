#include <iostream>
#include <vector>
#include <string>
using namespace std;

string* readText1(int& outTextArrSize);
string* readText2(int& outTextArrSize);
vector<string> readText3();
int main_arr();
int main_vector();

int main() {
    main_vector();
    
    return 0;
}

int main_vector() {
    vector(string) textVector;
    textVector = readText1();

    cout << "Your text is: " << endl;
    for(int i = 0; i < textVector.size(); i+=1) {
        cout << i + 1 << ". " << textVector[i] << endl;
    } 
    return 0;
}

int main_arr() {
    string* textArr;
    int textArrSize;
    textArrSize = readText2(textArrSize);

    cout << "your text is: " << endl;
    for(int i = 0; i < textArrSize i++) {
        cout << i + 1 << ". " << textArr[i] << endl;
    }
    delete [] textArr;
    return 0;
}

string* readText1(int& outTextArrSize) {
    string* textArr = NULL;
    int textArrSize;
    
    cout << "Please enter number of lines: " << endl;
    cin >> textArrSize;
    cin.ignore(1);

    textArr = new string[textArrSize];

    cout << "Please enter " << textArrSize << " lines: " << endl;
    for(int i = 0; i < textArrSize; i +=1) {
        getline(cin, textArr[i]);
    }

    outTextArrSize = textArrSize;
    return textArr;
}

string* readText2(int& outTextArrSize) {
    string* textArr = NULL;
    bool seenEmptyLine;
    int textArrSize;
    int textArrPhysicalSize;
    string currLine;

    cout << "Please enter a sequence of lines." << endl;
    cout << "To end the input, type an empty lines: " << endl;
    
    
    textArr = new string[1];
    textArrSize = 0; // acurtal number of line
    textArrPhysicalSize = 1; // overall capacity of the string array

    seenEmptyLine = false;
    while(seenEmptyLine == false) {
        getline(cin, currLine);
        if(currLine == "") {
            seenEmptyLine = true;
        }
        else{
            //increase the memory of array size
            if(textArrSize == textArrPhysicalSize) {
                string* newTextArr;
                newTextArr = new string[2 * textArrPhysicalSize];
                for(int i = 0; i < textArrSize; i +=1) {
                    newTextArr[i] = textArr[i];
                    delete [] textArr;
                    textArr = newTextArr;
                    textArrPhysicalSize *= 2; 
                }
                textArr[textArrSize] = currLine;
                textArrSize += 1;
            }
        }

    }
    outTextArrSize = textArrSize;
    return textArr;
}


vector<string> readText3() {
    vector<string> textVector;
    bool seenEmptyLine;
    string currLine;

    cout << "Please enter a sequence of lines." << endl;
    cout << "To end the input, type an empty lines: " << endl;

    seenEmptyLine = false;
    while(seenEmptyLine == false) {
        getline(cin,currline);
        if(currline == "") {
            seenEmptyLine = true;
        }
        else{
            textVector.push_back(currLine);
        }
    }
}