/*#include <iostream>
using namespace std;

int main() {


   binarySearch(list[], int key)

}



binarySearch(int[] list, int key) {
    int low = 0;
    int high = list.length - 1;
    
    while(high <= low) {
        int mid = low + (low+high) / 2;
        
                   // element in the position of mid.
        if(key > list[mid]) {
            low = mid + 1;
        }
        else if( key == list[mid]) {
            return mid;
        }
        else {
            high = mid - 1;
        }
    }
    return mid;




}
*/