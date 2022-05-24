#include <iostream>
using namespace std;
string* createwordsArray(string sentence, int& outWordArrSize); 
void printArr(string* arr, int size);
int main() {
    string input;
    cout << "Please enter a sentence: " << endl;
    getline(cin, input);

    int wordArrSize;
    string* wordArr = createwordsArray(input, wordArrSize);
    cout << "word count is: " << wordArrSize << endl;
    printArr(wordArr, wordArrSize);

    delete [] wordArr;
    return 0;
}

string* createwordsArray(string sentence, int& outWordArrSize) {
    string *newArr = new string[sentence.length()];
    int count = 0;
    int index = 0;
    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' ') {
            newArr[count] = sentence.substr(index, i - index);
            count++;
            index = i + 1;
        }
    }
    newArr[count] = sentence.substr(index);
    count++;
    outWordArrSize = count;
    return newArr;

}

void printArr(string* arr, int size) {
    cout << "[";
    for(int i = 0; i < size - 1; i ++) {
        cout << "\"" << arr[i] << "\" ,";
    }
    cout << "\""<< arr[size - 1] << "\" ]," << endl;
    

}