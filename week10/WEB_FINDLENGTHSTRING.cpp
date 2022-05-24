// Write c++ program to find length of sptring pointer
// char arr[500;] // no space allowed.
// cin >> arr;

#include <iostream>
using namespace std;

int main() {
    char arr[500];
    char *ptr = nullptr; // NULL;
    int length = 0;
    ptr = arr;

    cout << "Enter a string without spaces" << endl;
    cin >> arr;
    while(*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "length of the string is: " << length << endl;

    

    return 0;
}