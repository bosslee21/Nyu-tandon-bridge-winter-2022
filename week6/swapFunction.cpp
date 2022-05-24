#include <iostream>
using namespace std;
void swap2(int x, int y);

int main() {
    int a = 3;
    int b = 4;
    cout << "Before : a = " << a << " b = " << b << endl;
    swap2(a,b);

    cout<< "After : a = " << a << " b = " << b << endl;
    return 0;   
}

void swap2(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

}