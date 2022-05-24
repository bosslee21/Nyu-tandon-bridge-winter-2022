#include <iostream>
using namespace std;

int sortSearch(int arr[], int arrSize, int val);
// return an index of value // binary search
int main() {
    int srtArr[10] = {1, 3, 5, 7, 8 ,9, 11, 13, 15,17};

    cout << sortSearch(srtArr, 10, 13) << endl;

    return 0;
}

// basic search Algo reuntime =  0(n)
int search(int arr[], int arrSize, int val) {
    int i;
    i = 0;
    while( i < arrSize) {
        if(arr[i] == val) {
            return i;
        }

        i++;
    }

    return -1;
}

// The sorted search problem 
// runtime 0(log_2n)
int sortSearch(int arr[], int arrSize, int val) {
   int low = 0;
   int high = arrSize -1;


    int mid = low + (low - high) / 2;

    while(low >= high) {
        if(arr[mid] == val) {
            return arr[mid];
        }
        else if( arr[mid] > val) {
            low = mid +1;
        }
        else{
            high = mid - 1;

        }
    }

    return -1;


}