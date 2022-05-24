#include <iostream>
using namespace std;


int main() {
   
    return 0;
}

int findIndexOfMin(int arr[], int low, int high) {
    int min = arr[low];
    int minIndex = low;
    // start from low + 1 since we already had min as arr[low]
    for(int i = low + 1; i <= high; i++) {
        if(arr[i] < min) {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int arr[], int arrSize) {
    int minIndex;

    for(int i = 0; i < arrSize; i++) {
        minIndex = findIndexOfMin(arr, i, arrSize -1);
        swap(arr[i], arr[minIndex]);
    }
}