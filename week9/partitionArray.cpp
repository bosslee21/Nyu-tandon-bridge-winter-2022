#include <iostream>
using namespace std;
void sortArrayPetition(int arr[], int size);
void printArray(int arr[], int size);
int main() {
    // sort this array so -1 comes and 0 and 1;
    int arr[10] = {-1, 0, -1, 1, 1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArrayPetition(arr,size);
    printArray(arr,size);

    return 0; 
}



void sortArrayPetition(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while(left < right) {
        while(left < right && arr[left] % 2 == 0) {
            left++;
        }
        while(left < right && arr[right] % 2 == 1) {
            right++;
        }
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

}

void sortArrayPetition2(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    for(int i = 0; i < right; i++) {
        if(arr[left] > 0 && arr[right] < 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[rigjt] = temp;
            left++;
            right--;
        }
    }

}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
}