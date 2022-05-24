#include <iostream>
#include <ctime>
using namespace std;

const int PIN_SIZE = 5;
const int PIN[PIN_SIZE] = {2,3,4,5,6};
void generateRandomNum(int arr[]);
void printArray (int arr[], int arrSize);
bool checkPin(int arr[], string userInput);

int main() {
    int ranNum[10];
    generateRandomNum(ranNum);
    string input;


    cout << "Please enter your PIN according to the following mapping: " << endl;
    cout << "PIN:\t" << "0 1 2 3 4 5 6 7 8 9" << endl;
    cout << "NUM:\t";
    printArray(ranNum, 10);

    cin >> input;

    if(checkPin(ranNum,input)) {
        cout << "Your PIN is correct" << endl;
    }
    else{
        cout << "Your PIN is not correct" << endl;
    }

    return 0;
}

void generateRandomNum(int arr[]) {
    srand(time(0));
    for(int i = 0; i < 10; i++){
        arr[i] = (rand() % 3) + 1;    
    }
}

void printArray(int arr[], int arrSize) {
    for(int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool checkPin(int arr[], string userInput) {
    if (userInput.length() != PIN_SIZE) {
        return false;
    }

    int authenicationNumber[PIN_SIZE];
    int inputToArray[PIN_SIZE];

    // Initialize arrays.
    for(int i = 0; i < PIN_SIZE; i++) {
        authenicationNumber[i] = arr[PIN[i]];
    }
    for(int i = 0; i < userInput.length(); i++) {
        inputToArray[i] = userInput[i] - '0';
    }

    // Check if the arrays are the same.
    for(int i = 0; i < PIN_SIZE; i++) {
        if(authenicationNumber[i] != inputToArray[i]) {
            return false;
        }
    }
    return true;
}




