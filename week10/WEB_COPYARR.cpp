//c++ program to copy one string to another string.
#include <iostream>
using namespace std;

int main() {
    char arr[500];
    char* ptr = NULL;
    ptr = arr;

    char arr2[500];
    char* ptr2 = nullptr;
    ptr2 = arr2;
    
    int length = 0;
    cout << "Enter a string without space: " << endl;
    cin >> arr;
    
    while(*ptr != '\0') {
        *ptr2 = *ptr;
        ptr2++;
        ptr++;
        length++;
    }
    

    cout << "Length of the char is: " << length << endl;
    cout << "Copied String is: " << arr2 << endl;

    return 0;
}