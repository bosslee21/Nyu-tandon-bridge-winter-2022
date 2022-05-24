#include <iostream>
using namespace std;

const int SIZE_OF_ARR = 20;
int minInArray(int arr[], int sizeArr);
void minLocate(int arr[]);
int main() {
    int arr[SIZE_OF_ARR];
    int min;
    cout << "Please enter 20 integer separated by space: " << endl;
    
    for(int i = 0; i < SIZE_OF_ARR; i++) {
        cin >> arr[i]; 
    }
    min = minInArray(arr,SIZE_OF_ARR);

    cout << "The minimum value is " << minInArray(arr,SIZE_OF_ARR) << ", and its located in the folowing indices: ";
    minLocate(arr);

    return 0;
}

int minInArray(int arr[], int sizeArr) {
    int min = arr[0];
    for(int i = 1; i < sizeArr; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void minLocate(int arr[]) {
    
    int min = minInArray(arr,SIZE_OF_ARR);
    for(int i = 0; i <SIZE_OF_ARR; i++) {
        if(arr[i] == min) {
            cout << i << " ";
        }
    }
    cout << endl;
    
}
