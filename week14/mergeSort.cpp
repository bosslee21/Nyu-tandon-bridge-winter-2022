#include <iostream>
using namespace std;
/* 
step1: recursive sort and store first half of array sort
step2: recursive sort and store second half of the number sort
step3: merge two half together into one sorted sequence
*/
int main() {


    return 0;
}
//merge step1 and step2
void mergeSort(int arr[], int low, int high) {
    int mid;

    
    // base case (recursion)
    if(low == high) {
        return;
    }
    //3 steps implement here;
    else {
        mid = low + (low - high) / 2;
        //first half of sort
        mergeSort(arr,low,mid);
        //sort second half of sort;
        mergeSort(arr,mid + 1, high);

        //call merge function
        merge(arr,low,mid,high);
    }
}
// we know when highLeft (after highLeft + 1) so we do not need parameter
void merge(int arr[], int lowLeft, int highLeft, int highRight) {
    int lowRight, size;
    //int *mergeArr;
    int indexRight, indexLeft, indexResult;

    lowRight = highLeft +1;
    size = highRight - lowLeft + 1;
    int *mergeArr = new int[size];

    indexLeft = lowLeft;
    indexRight = lowRight;
    indexResult = 0;

    int iArr;

    while(indexLeft <= highLeft && indexRight <= highRight) {
        if(arr[indexLeft] < arr[indexRight]) {
            mergeArr[indexResult] = arr[indexLeft];
            indexLeft++;
            indexResult++;
        }
        else{
            mergeArr[indexResult] = arr[indexRight];
            indexRight++;
            indexResult++;
        }
    }
    // if only one arr is finished in above while loop. copy the rest of the
    //element from rest of the array.
    // since its compy from half from the array. if one array is all small
    //number then other array is not copied. so we copy rest of the element
    // if number is remaining.
    while(indexLeft <= highLeft) {
        mergeArr[indexResult] = arr[indexLeft];
        indexLeft++;
        indexResult++;
    }
    while(indexRight <= highRight) {
        mergeArr[indexResult] = arr[indexRight];
        indexRight++;
        indexResult++;
    }


    // copy the arr from mergeArr to  arr that was in parameter
    for(int i = 0, iArr = lowLeft; i < size; i++, iArr++ ) {
        arr[iArr] = mergeArr[i];
    }


    delete[] mergeArr;
}