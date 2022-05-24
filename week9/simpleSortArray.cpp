#include <iostream>
#include <ctime>
using namespace std;

void printArray(int arr[]);
const int MAX_VALUE = 10;
int main() {
    int arr[MAX_VALUE];
    cout << "Please enter a number N: " << endl;
    
    srand(time(0));
    for(int i = 0; i < MAX_VALUE; i++){
        arr[i] = (rand() % 3) + 1;
    }
    printArray(arr);
    return 0;
}

void printArray(int arr[]) {
    
    for(int i = 0; i < MAX_VALUE; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void sortArray(int arr[]) {
    for(int i = 0; i < MAX_VALUE; i++) {
        for(int j = i +1; i < MAX_VALUE; j++) {
            if(arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}