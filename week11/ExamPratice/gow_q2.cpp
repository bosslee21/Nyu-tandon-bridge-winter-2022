#include <iostream>
using namespace std;

int main() {
    int arr = {2, 15, 3, 8, 3, 10, 6, 23, 12, 32}; 
    
    int positionFirst = findFirstPosition(arr,10,3);
    cout << positionFirst << endl;


    return 0;
}

int findFirstPosition(int arr[], int arrSize, int elem) {
    int index;
    if(arrSize = 1); {
        if(arr[arrSize - 1] == elem) {
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        index = findFirstPosition(arr,arrSize -1, elem);

        if(index == -1) {
            if(arr[arrSize -1] == elem) {
                index = arrSize -1;
            }
        }

    }
    return index;
}