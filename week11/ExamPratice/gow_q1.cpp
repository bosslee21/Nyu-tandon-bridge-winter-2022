#include <iostream>
using namespace std;
double findMedian(int arr[], int n);
int main() {
    int arr[] = {3, 5, 3, 7, 1, 7, 6};
    double median = findMedian(arr,7);
    cout << median << endl;
    return 0;
}

double findMedian(int arr[], int n) {
    int size = n + 1;
    int middleNumber;
    double median = 0.0;

    middleNumber = (n / 2) + 1;
    int* newArr = new int[size];
    for(int i = 0; i <= n; i++) {
        newArr[i] = 0;
    }
    int value;
    for(int i = 0; i < n; i++) {
        value = arr[i];
        newArr[value] = newArr[value]++;
    }


    int count = 0;
    for(int i = 1; i <=n; i++) {
        count+= newArr[i];
    
        if(count >= middleNumber) {
            median = i;
            break;
        }
    }
    delete[] newArr;
    
    return median;
}
