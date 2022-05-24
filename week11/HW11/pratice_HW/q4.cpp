#include <iostream>
using namespace std;
const int N = 6;
int jumpSum(int arr[], int n);

int main() {
    int arr[] = {0, 3, 80, 6, 57, 10};
    int sumOfJump = jumpSum(arr, N);
    cout << sumOfJump << endl;
   
    return 0;
}

int jumpSum(int arr[], int n) {
    
    if(n <= 1) {
        return 0;
    }
    else{
       int oneStep = arr[n -1];
       int twoStep = arr[n - 2]; 
      
        if(oneStep >  twoStep) {
           return jumpSum(arr, n - 2) +  arr[n-2];//3
        }
        else{
            return jumpSum(arr, n -1) + arr[n- 1];//5 //2
        }
    }

}