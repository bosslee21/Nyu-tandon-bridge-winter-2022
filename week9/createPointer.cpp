#include <iostream>
using namespace std;
// pointer locate the memory address and store it. 

int main() {
    int x = 100;
    //creating pointer varible
    int *ptr;
    // pointing to varible x with &(reference addressing)
    ptr = &x;

    cout << ptr << endl; // This will print out the memory location of where pointer is pointing to. 
    cout << *ptr; // This will print out the value of 100 (* deference operation)
    
    *ptr = 20; // change the value of x to 20 x= 20;

    //pointer should always point to some varible or we can assign as 
    // NULL or nullptr
    int * ptr = nullptr;
    int * ptr = NULL;

    //when defining mulitple pointer * need to be associated with it 
    int *ptr2, *ptr3, x;
    
    //delete ptr; < does not change the pointer and return the momory 
    //pointer point to same location but I dont own it. 
    // ptr = nullptr; << point to null right after deletion to prevent double delete;


    return 0;
}