#include <iostream>
using namespace std;
const int SIZE = 6;
void printArray(int arr[], int arrSize);
int* getPosNums1(int *arr, int arrSize, int &outPosArrSize);
int* getPosNums2(int *arr, int arrSize, int* outPosArrSizeptr);
void getPosNum3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNum4(int* arr, int arrSize, int** outPosArr, int* outPosArrSize);

int main() {
    int arr[SIZE] = {3, -1, -3, 0, 6, 4};
    int arr2[SIZE] = {6, -3, -9, 2, 1, 4};
    int arr3[SIZE] = {11, 14, -9, 4, -6, 6};
    int arr4[SIZE] = {11, 14, -9, 4, -6, 6};

    //A
    int posArrSize1;
    int *getPos1 = getPosNums1(arr,SIZE, posArrSize1);
    printArray(getPos1, posArrSize1);

    //B
    int posArrSize2;
    int *getPos2 = getPosNums2(arr2, SIZE, &posArrSize2);
    printArray(getPos2, posArrSize2);
    
    //C
    int posArrSize3;
    int *posArr3;
    getPosNum3(arr3, SIZE,posArr3,posArrSize3);
    printArray(posArr3, posArrSize3);

    //D
    int posArrSize4;
    int *posArr4;
    getPosNum4(arr4, SIZE, &posArr4, &posArrSize4);
    printArray(posArr4,posArrSize4);

    delete [] getPos1;
    delete [] getPos2;
    delete [] posArr3;
    delete [] posArr4;

    return 0;
}
void printArray(int arr[], int arrSize) {
    cout << "[";
    for(int i = 0; i < arrSize -1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[arrSize -1] <<  "]" << endl;
}
//A
int* getPosNums1(int *arr, int arrSize, int &outPosArrSize) {
    int *newArr = new int [SIZE];
    int posArrSizeCount = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[posArrSizeCount] = arr[i];
            posArrSizeCount++;
        }
    }
    
    outPosArrSize = posArrSizeCount;
    return newArr;
    
}
   
//B
int* getPosNums2(int *arr, int arrSize, int* outPosArrSizeptr) {
    int *newArr = new int [SIZE];
    int posArrSizeCount = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[posArrSizeCount] = arr[i];
            posArrSizeCount++;
        }
    }

    *outPosArrSizeptr = posArrSizeCount;
    return newArr;
}

void getPosNum3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize) {
    int *newArr = new int [SIZE];
    int posArrSizeCount = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[posArrSizeCount] = arr[i];
            posArrSizeCount++;
        }
    }
    outPosArrSize = posArrSizeCount;
    outPosArr = newArr;
}

void getPosNum4(int* arr, int arrSize, int** outPosArr, int* outPosArrSize) {
    int *newArr = new int [SIZE];
    int posArrSizeCount = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[posArrSizeCount] = arr[i];
            posArrSizeCount++;
        }
    }

    *outPosArrSize = posArrSizeCount;
    *outPosArr = newArr;
}



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
    int arr[SIZE] = {3, -1, -3, 0, 6, 4};
    int arr2[SIZE] = {4, -1, -4, 0, 6, 8};
    int arr3[SIZE] = {6, -1, -6, 0, 8, 10};
    int arr4[SIZE] = {4, -1, -6, 0, 10, 12};
    cout << "OG array: " << endl;
    printArray(arr, SIZE);

    //posNum1
    int newPosArrSize1;
    int *getPos1 = getPosNums1(arr, SIZE, newPosArrSize1);
    printArray(getPos1,newPosArrSize1);

    //posNum2
    int newPosArrSize2;//공간을 만들고
    int *getPos2 = getPosNums2(arr2, SIZE, &newPosArrSize2); //주소를 줘서 
    printArray(getPos2, newPosArrSize2);

    //posNum3
    int *outPosArr; // 주소를 stored
    int newPosArrSize3;
    getPosNums3(arr3, SIZE, outPosArr, newPosArrSize3);
    printArray(outPosArr, newPosArrSize3);

    //posNum4
    int *outPosArr4;
    int newPosArrSize4;
    getPosNums4(arr4, SIZE, &outPosArr4, &newPosArrSize4);
    printArray(outPosArr4,newPosArrSize4);
    return 0;
}
void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
// 주소를 넣어서
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr) {
    int *newArr = new int[SIZE];
    int index = 0;
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] > 0) {
            newArr[index] = arr[i];
            index++;
        }
    }
    //공간에 들어가서 deference 해서  value(index)값을 4 넣어라.
    *outPosArrSizePtr = index;
    return newArr;
}
// c                                     pointer 에 reference(주소) deference 되있는.
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