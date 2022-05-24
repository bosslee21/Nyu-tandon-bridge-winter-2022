#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1,word2,word3;
    cout << "Please enter 3 word separated by space: " << endl;
    cin >> word1 >> word2 >> word3;

    if(word1 <= word2 && word1 <= word3) {
        cout << word1;
    }
    else if(word2 <= word1 && word2 <= word3) {
        cout << word2;
    }
    else {
        cout << word3;
    }
}