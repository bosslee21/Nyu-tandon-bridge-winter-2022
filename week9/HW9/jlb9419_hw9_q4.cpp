#include <iostream>
using namespace std;

int main() {


    return 0;
}

void printArray(int arr[], int size) {
    
    cout << "[";
    for(int i = 0; i < size - 1; i++){
        cout << arr[i] << ", ";
    }
    cout << arr[size -1] << "]";
}

void oddKeepEvensFlip(int arr[], int arrSize){
    int start = 0;
    int last = arrSize - 1;
    int *hArr = new int[arrSize];

    for(int i = 0; i < arrSize; i++) {
        if(arr[i] % 2 == 0) {
            hArr[last] = arr[i];
            last--;
        }
        else{
            hArr[start] = arr[i];
            start++;
        }
    }
    for(int i = 0; i < arrSize; i++) {
        arr[i] = hArr[i];
    }
    //delete [] hArr;

}