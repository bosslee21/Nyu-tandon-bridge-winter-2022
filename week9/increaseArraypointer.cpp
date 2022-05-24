#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size = 10;
    int  *arr = new int[size];
    for(int i = 0; i <size; i++) {
        arr[i] = i * 10;
    }
    // since array is full so we can add array
    int oneMore = 100;

    int newSize = size * 2;
    resizeArray(arr,size,newSize);
    size = newSize;

    arr[size++] = oneMore;

    return 0;
}   
       // & is here since array size need to be changed.      
void resizeArray(int*& arr, int currenSize, int newSize) {
    int *temp = new int[newSize];

    //copy the arr to temp arr;
    for(int i = 0; i <currenSize; i++) {
        temp[i] = arr[i];
    }
    // delete the arr[] to prevent memory leak; 
    delete[] arr;
    //resize the arr by temp array length. 
    arr = temp;
} 