#include <iostream>
#include <cmath>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main() {
    int arr[4] = {2, -1, 3, 10};

    int finalSum = sumOfSquares(arr,4);
    cout << finalSum << endl;

    if(isSorted(arr,4)) {
        cout << " The array is sorted" << endl;
    }
    else{
        cout << "The Array is not sorted " << endl;
    }

    return 0;
}


int sumOfSquares(int arr[], int arrSize) {
    // if arrsize == 1;
    if(arrSize == 0) {
         // could return arr[0] * arr[0];
        return 0;
    }
    else{
        return sumOfSquares(arr, arrSize -1) + (arr[arrSize - 1] * arr[arrSize - 1]);
    }   
}

bool isSorted(int arr[], int arrSize) {
    if(arrSize == 1) {

        return true;
    }
    else{
       
        
       return isSorted(arr, arrSize -1) && (arr[arrSize - 1] >= arr[arrSize -2]);
    }

}