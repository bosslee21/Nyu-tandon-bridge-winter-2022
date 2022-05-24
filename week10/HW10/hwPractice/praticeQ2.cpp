#include <iostream>
using namespace std;
int const SIZE = 6;
int* findMissing(int arr[], int n, int& resArrSize);
void printArr(int arr[], int size);

int main() {
    
    int arr[SIZE] = {3, 1, 3, 0, 4, 6};
    printArr(arr,SIZE);

    int arrSize;
    int* missingArr = findMissing(arr, 6, arrSize);
    cout << arrSize << endl;
    printArr(missingArr, arrSize);

    delete [] missingArr;

    return 0;
}

int* findMissing(int arr[], int n, int& resArrSize) {
    int* newArr = new int[n+1];
    for(int i = 0; i < n ; i++) {
        newArr[arr[i]]++;
    }

    int* newArrOnlyMissing = new int[n];
    int reSize = 0;
    for(int i = 0; i <= n; i++) {
        if(newArr[i] == 0) {
            newArrOnlyMissing[reSize] = i;
            reSize++; 
        }
    }
    delete [] newArr;
    resArrSize = reSize;
    return newArrOnlyMissing;
}

void printArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



