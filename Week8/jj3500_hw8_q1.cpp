#include<iostream>
using namespace std;

const int ARRAY_SIZE = 20;

int minInArray(int arr[], int arrSize);
void printIndices(int arr[], int min, int arrSize);

int main () {
    int arrOne[ARRAY_SIZE];
    int currInt, ind, min;

    cout << "Please enter " << ARRAY_SIZE << " integers separated by a space:\n";

	for (ind = 0; ind < ARRAY_SIZE; ind++) {
		cin>>currInt;
		arrOne[ind] = currInt;
	}
    min = minInArray(arrOne, ARRAY_SIZE);
    cout << "The minimum value is " << min <<", and it is located in the following indices:";

    printIndices(arrOne, min, ARRAY_SIZE);

    return 0;
}

//1. returns the minimum value in arr
int minInArray(int arr[], int arrSize) {
    int min = arr[0];
    int curr;
    for (int i = 1; i < arrSize; i++) {
        curr = arr[i];
        if (curr < min)
            min = curr;
    }
    return min;
}

void printIndices(int arr[], int min, int arrSize) {
    for(int i = 0; i < arrSize; i++) {
        if (arr[i] == min)
            cout << i << ' ';
    }
    cout << endl;
}

void printIndices(int arr[]) {
    int min = minInArray(arrOne, ARRAY_SIZE);
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == min)
            cout << i << ' ';
    }
    cout << endl;
}