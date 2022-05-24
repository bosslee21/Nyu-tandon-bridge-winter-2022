#include <iostream>
#include <string>
using namespace std;

int const NUM_ALPHABET = 26;
int* createAlphabetArray(string line);
void printArray(int arr[]);
bool isAnagrams(int* line1, int* line2);

int main() {
    string input1;
    string input2;
    cout << "Please enter first string: " << endl;
    getline(cin, input1);
    cout << "Please enter second string: " << endl;
    getline(cin, input2);

   int *lineOneInput = createAlphabetArray(input1);
   int *lineTwoInput = createAlphabetArray(input2);
   //print arry to check both array is same.
   printArray(lineOneInput);
   printArray(lineTwoInput);

    if(isAnagrams(lineOneInput, lineTwoInput)) {
        cout << input1 << " and " << input2 << " is anagrams." << endl;
    }
    else{
        cout << input1 << " and " << input2 << " is not anagrams." << endl;
    }
    delete [] lineOneInput;
    delete [] lineTwoInput;
    return 0;
}

int* createAlphabetArray(string line) {
    
    int *newArr = new int[NUM_ALPHABET];

    for(int i = 0; i < line.length(); i++) {
        if(line[i] >= 'a' && line[i] <= 'z') {
            newArr[line[i] - 'a']++;
        }
        else if(line[i] >= 'A' && line[i] <= 'Z') {
            newArr[line[i] - 'A']++;
        }
    }
    
    return newArr;
   
}

void printArray(int arr[]) {
    for(int i = 0; i < NUM_ALPHABET; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isAnagrams(int* line1, int* line2) {
    for(int i = 0; i < NUM_ALPHABET; i++){
        if(line1[i] != line2[i]) {
            return false;
        }
    }
    return true;
}



    