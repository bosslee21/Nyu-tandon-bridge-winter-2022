#include <iostream>
using namespace std;
void printArray(int arr[], int size);
int* findMissingInArr(int arr[], int n, int& resArrSize);

const int SIZE = 6;
int main() {
    
    int arr[SIZE] = {3, 1, 3, 0, 6, 4};
    //printing original array
    cout << "Original array is : ";
    printArray(arr,SIZE);
    
    int newArrSize; // new arrsize for missing number array
    int* missingArr = findMissingInArr(arr, SIZE, newArrSize); 
    
    cout << "Number missing in the original array : ";
    printArray(missingArr, newArrSize);
    cout << "New Array Size is: " << newArrSize << endl;
    delete [] missingArr;
    return 0;
}



int* findMissingInArr(int arr[], int n, int& resArrSize) {
    int *computerMissingArr = new int[n + 1];
    for(int i = 0; i < n; i++){
        computerMissingArr[arr[i]]++;
    }
    
    int *createNewArr = new int[n];
    int count = 0;
    for(int i = 0; i <= n; i++){
        if(computerMissingArr[i] == 0) {
            createNewArr[count] = i;
            count++;
        }
    }
    delete [] computerMissingArr;
    resArrSize = count;
    return createNewArr;
     
}

void printArray(int arr[], int size) {
    
    cout << "[";
    for(int i = 0; i < size - 1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[size -1] << "]" << endl;
}