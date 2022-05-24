#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);
int main() {
    int arr[] = {2 ,-1 ,3 ,10};
    int total = sumOfSquares(arr,4);
    cout << total << endl;

    bool sort = isSorted(arr,4);
    if(sort) {
        cout << "is sorted " << endl;
    }
    else{
        cout << "is Not sorted: " << endl;
    }
    return 0;
}

int sumOfSquares(int arr[], int arrSize) {
    if(arrSize == 1) {
        return arr[0] * arr[0];
    }
    else{
       return sumOfSquares(arr, arrSize -1) + (arr[arrSize -1] * arr[arrSize - 1]);

    }
}


bool isSorted(int arr[], int arrSize) {
    if(arrSize == 1) {
        return true;
    }
    else{
        return isSorted(arr, arrSize -1) && arr[arrSize - 1] >= arr[arrSize - 2];
    }
    


}