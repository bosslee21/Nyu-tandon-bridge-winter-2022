#include <iostream>
using namespace std;
bool areAllEven(int arr[], int n);
int main() {

    int arr[4] = {2 ,21 , 46, 14};
    if(areAllEven(arr,4) == true) {
        cout << "all are even" << endl;
    }
    else{
        cout << " not even" << endl;
    }
    return 0;
}

bool areAllEven(int arr[], int n) {
    bool result;
    if(n == 1) {
        return (arr[0] % 2 == 0); // first element
    }
    else {
        result = areAllEven(arr, n - 1);
        if(result == true) {
            return (arr[n -1] % 2 == 0); // last element
        }
        else{
            return false;
        }
    }
}