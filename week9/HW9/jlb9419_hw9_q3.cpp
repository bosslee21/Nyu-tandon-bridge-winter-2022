#include <iostream>
using namespace std;
int const SIZE = 6;
void printArray(int arr[], int size);
int* getPosNums1(int *arr, int arrSize, int &outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr);
// function parameter has * or ** then when we call function in the main the parameter should have &. and in the function
// itself we must dereference with *.
int main() {
    //test array
    int arr[SIZE] = {3, -1, -3, 0, 6, 4};
    int arr2[SIZE] = {4, -1, -4, 0, 6, 8};
    int arr3[SIZE] = {6, -1, -6, 0, 8, 10};
    int arr4[SIZE] = {4, -1, -6, 0, 10, 12};
    cout << "Origial array: ";
    printArray(arr, SIZE);

    //posNum1
    int newPosArrSize1;
    int *getPos1 = getPosNums1(arr, SIZE, newPosArrSize1);
    printArray(getPos1,newPosArrSize1);

    //posNum2
    int newPosArrSize2;
    int *getPos2 = getPosNums2(arr2, SIZE, &newPosArrSize2); 
    printArray(getPos2, newPosArrSize2);

    //posNum3
    int *outPosArr; 
    int newPosArrSize3;
    getPosNums3(arr3, SIZE, outPosArr, newPosArrSize3);
    printArray(outPosArr, newPosArrSize3);

    //posNum4
    int *outPosArr4;
    int newPosArrSize4;
    getPosNums4(arr4, SIZE, &outPosArr4, &newPosArrSize4);
    printArray(outPosArr4,newPosArrSize4);

    delete [] getPos1;
    delete [] getPos2;
    delete [] outPosArr;
    delete [] outPosArr4;

    return 0;
}

void printArray(int *arr, int size) {
    
    cout << "[";
    for(int i = 0; i < size - 1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[size -1] << "]" << endl;
    
}
// a)
int* getPosNums1(int *arr, int arrSize, int &outPosArrSize) {
    int *newArr = new int[SIZE];
    int index = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    outPosArrSize = index;
    return newArr;

}
//B

int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    int *newArr = new int[SIZE];
    int index = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    
    *outPosArrSizePtr = index;
    return newArr;
}
// c                                   
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    int *newArr = new int[SIZE];
    int index = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    outPosArr = newArr;
    outPosArrSize = index;
   

}
//D
void getPosNums4(int* arr, int arrSize,int** outPosArrPtr, int* outPosArrSizePtr) {
    int *newArr = new int[SIZE];
    int index = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    *outPosArrPtr = newArr;
    *outPosArrSizePtr = index; 
}