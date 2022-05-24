#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main() {
    int arr[] = {2, 4, 6, 10};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    
    int final = sumOfSquares(arr,sizeArr);
    cout << final << endl;
    
    if(isSorted(arr,4)) {
        cout << "Array is sorted: " << endl;

    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
}

int sumOfSquares(int arr[], int arrSize) {
    if(arrSize == 1) {
        return arr[0] * arr[0];
    }
    else{
        //base when n > 1
        // 4 /3 /2/ 
        return sumOfSquares(arr, arrSize -1) + (arr[arrSize -1] * arr[arrSize -1]);
    }
}

bool isSorted(int arr[], int arrSize) {
    if(arrSize == 1) {
        return true;
    }
    else{
        return isSorted(arr, arrSize -1) && arr[arrSize - 2] < arr[arrSize - 1];
    }

}