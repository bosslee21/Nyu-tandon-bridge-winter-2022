#include <iostream>
using namespace std;

int main() {
    Thing one(1);
    Thing two(2);
}
class Thing {
    int* value;
public:
    Thing(int newVal = 0) : value(new int(newVal)){}
    ~Thing() {
        delete value; // deconstructor
    }
    Thing(const Thing&ths) {
        value = new int*(*rhs.value); //copy constructor
    }
    Thing& operator=(const Thing& rhs) {
        *value = *rhs.value //assigment operator
    }
    
};