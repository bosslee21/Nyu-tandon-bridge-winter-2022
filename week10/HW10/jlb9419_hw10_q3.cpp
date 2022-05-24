#include <iostream>
#include <vector>
using namespace std;
const int SIZE = 20;
void version1();
int* findNum(int* arr, int size, int SearchNum, int &outSearchSize);
void printArray(int* arr, int size, int searchNum);
void version2();
vector<int> findNuminLine(vector <int> &arr, int numSearch);
void printArr(vector<int> arr, int numSearch);

int main() {
    cout << "Version 1:  " << endl;
    version1();

    cout << "Version 2 using Vector " << endl;
    version2();
    

}
void version1() {
    
    cout << "Please enter a sequence of positive integers, each in a separate line. \n";
    cout << "End you input by typing -1." << endl;
    int input;
    int* newArr = new int[SIZE];
    int index = 0;
    while(true) {
        cin >> input;

        if(input == -1) {
            break;
        }
        else{
            newArr[index] = input;
            index++;
        }
    }
    int searchNum;
    int searchSize;
    cout << "Please enter a number you want to search." << endl;
    cin >> searchNum;

    int* findNumInArr = findNum(newArr,SIZE, searchNum,searchSize);
    printArray(findNumInArr,searchSize,searchNum);

    delete [] newArr;
}
int* findNum(int* arr, int size, int searchNum, int &outSearchSize) {
    int *findArr = new int [size];
    int index = 0;
    for(int i = 0; i < size; i++) {
        if(searchNum == arr[i]) {
            findArr[index] = i + 1;
            index++;
        }
    }
    outSearchSize = index;
    return findArr;
}

void printArray(int* arr, int size, int searchNum) {
    
    if(size == 0) {
        cout << searchNum << " does not match any positive integer in the sequence" << endl;
    }
    else {
        cout << searchNum << " show in lines ";
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
void version2() {
    vector<int> v;
    cout << "Please enter a sequence of positive integers, each in a separate line. \n";
    cout << "End your input by typing -1." << endl;

    int input2;
    while(true) {
        cin >> input2;
        if(input2 == -1) {
            break;
        }
        else {
            v.push_back(input2);
        }
    }

    int findNum;
    cout << "Please enter a number you want to search." << endl;
    cin >> findNum;

    vector<int> numInLine = findNuminLine(v,findNum);
    printArr(numInLine, findNum);

    
}

vector<int> findNuminLine(vector <int> &arr, int numSearch) {
    vector<int> newArr;

    for(int i = 0; i < arr.size(); i++) {
        if(numSearch == arr[i]) {
            newArr.push_back(i + 1);
        }
    }
    return newArr;
}

void printArr(vector<int> arr, int numSearch) {
    if(arr.empty()) {
        cout << "The sequence does not have any number matching. " << endl;
    }
    else {
        cout << numSearch << " shows in lines ";
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(count == 0) {
                cout << arr[i];
                count++;
            }
            else{
                cout << ", " << arr[i];
            }
            
        }
       cout << endl;
    }
}
