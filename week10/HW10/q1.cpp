#include <iostream>
#include <string>
using namespace std;
string* createWrodsArray(string sentence, int& outWordArrSize);
void printArray(string arr[], int arrSize);
int main() {
    int wordArrSize;
    string sentence;
    cout << "Please enter a sentence: " << endl;
    getline(cin,sentence);

    string* newArr = createWrodsArray(sentence,wordArrSize);
    cout << wordArrSize << endl;
    printArray(newArr, wordArrSize);

    delete [] newArr;
    return 0;
}

void printArray(string arr[], int arrSize) {
    cout << "[";
    for(int i = 0; i < arrSize; i++) {
        cout << "\"" << arr[i] << "\"";
        
        if( i != arrSize - 1) {
            cout << " , ";
        }
    }
    cout << "]"<< endl;
}

string* createWrodsArray(string sentence, int& outWordArrSize) {
    string *newArr = new string[sentence.length()];
    int count = 0;
    int index = 0;

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            newArr[count] = sentence.substr(index, i - index);
            index = i + 1;
            count++;
        }
        
    }
    newArr[count] = sentence.substr(index);
    count++;


    outWordArrSize = count;
    return newArr;

}