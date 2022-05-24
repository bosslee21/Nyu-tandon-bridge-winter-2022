#include <iostream>
#include <string>
using namespace std;

class Pet { //base class
private:
    string name;
    int petID;

public:
    Pet(int newID = 0) {
        petID = newID;
    }
    string getName() {
       
        return name;
    }
    void setName(string newName){
        name = newName;
    }
    void speak() const{
    
    }

};


class Cat : public Pet { // cat is a PET //derived class
    double whiskerLength;

public:
    Cat() : Pet(10000) {

    } // explicit call to base constructor
    void speak() const override {
        cout << "MEOW!" << endl;
    }
    void setLength(double newLength);

    double getLength() const{
        return whiskerLength;
    }
    void setName(string newName);
    cat& operator=(const Pet&);

};
//overWritten the funciton

void Cat:: setName(string newName) {
    whiskerLength = 0;
    pet:: setName(newName);
}
