#include <iostream>
using namespace std;
int jumpSum(int arr[],int size);

int main() {
    int arr[] = {0, 3, 80, 6, 57, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    // 6;

    int sum = jumpSum(arr,size);
    cout << sum << endl;
    return 0;
}

int jumpSum(int arr[],int size) {
    
    if(size <= 1) {
        return 0;
    }
    else{
        int oneStep = arr[size-1];
        int twoStep = arr[size-2];
        
        if(oneStep > twoStep) {
            return jumpSum(arr, size -2) + arr[size-2];
        }
        else{
            return jumpSum(arr, size -1) + arr[size -1];
        }
    }
}

