#include<iostream>
using namespace std;

int const SIZE = 6;

void oddsKeepEvensFlip(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

int main () 
{
    int arr1[SIZE] ={5,2,11,7,6,4};
    //int arr2[SIZE] ={3,6,14,19,30,13};
    
    oddsKeepEvensFlip(arr1,SIZE);
    printArray(arr1,SIZE);
    return 0;
}

void oddsKeepEvensFlip(int arr[], int arrSize) {
    int start = 0;
    int last = arrSize - 1;
    int *newArr = new int[SIZE];

    for(int i = 0; i < arrSize; i++) {
        if(arr[i] % 2 == 1) {
            newArr[start++] = arr[i];
        }
        else {
            newArr[last--] = arr[i];
        }
    }
    
    for(int i = 0; i < arrSize; i++) {
        arr[i] = newArr[i];
    }

    delete [] newArr;
}

void printArray(int arr[], int arrSize) {
    cout << "[";
    for(int i = 0; i < arrSize - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[arrSize -1] << "]" << endl;
}