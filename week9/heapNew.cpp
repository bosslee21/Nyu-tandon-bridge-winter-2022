#include <iostream>
using namespace std;
// varible can be created on the heap but does not have name
// it can only refer by pointer. 
// once memory is allocated on the heap, it will not be deallocated
// until you break it. if you lose track it will be a memory leak.

int main() {
    // stack creating variable, array
    int value = 5;
    int array[5];

    //heap creating varible , array
    int* hvalue = new int;
    *hvalue = 5;
    //array heap
    int* harray = new int[5];

    //delete 





    return 0;
}