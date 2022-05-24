#include <iostream>
using namespace std;
const int SIZE = 50;
void version1();
int* missingArr(int* arr, int numSearch, int &countSize);
void printArr(int* arr, int numSearch, int size);

int main() {
    version1();

    return 0;
}

void version1() {
    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1" << endl;

    int input;
    int* newArr = new int[SIZE];
    int count = 0;
    while(true) {
        cin >> input;
        if(input == -1) {
            break;
        }
        else{
            newArr[count] = input;
            count++;
        }
    }
    int numSearch;
    cout << "Please enter a number your want to search." << endl;
    cin >> numSearch;

    int * arrMissingNum = missingArr(newArr,numSearch,count);
    printArr(arrMissingNum,numSearch,count);

    delete [] newArr;
}

int* missingArr(int* arr, int numSearch, int &countSize) {
    int* newArr = new int[countSize];
    int newSize = 0;
    for(int i = 0; i < countSize; i++) {
        if(numSearch == arr[i]) {
            newArr[newSize] = i + 1;
            newSize++;
        }
    }
    countSize = newSize;
    return newArr;

}
void printArr(int* arr, int numSearch, int size) {
    if(size == 0) {
        cout << "no sequence match." << endl;
    }
    else{
        cout << numSearch << " shows in lines ";
        int count = 0;
        for(int i = 0; i < size; i++) {
            if(count == 0) {
                cout << arr[i];
                count++;
            }
            else{
                cout << ", " << arr[i];
            }
        }
        cout << "." << endl;
        
    }
}