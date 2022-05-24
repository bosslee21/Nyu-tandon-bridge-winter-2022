#include <iosteam>
using namespace std;


int main() {

    Pet p;
    Pet* pptr;
    Cat c;
    cat* cptr;
    p = c; // always allowed
    c = p; // allowed if operator(constPet& is overloaded)
    pptr = &c; //Always allowed, polymorphsim
    cptr = &p; // never allowed
}

/*
base class
object 
class vs object
encapsulation
protection - public / private which is default when to use? 
accessor and mutatior
constructor
overloading
member and non member
overrided classes 
derived pointer
deriver class object
polymorphsim - allow us to copy data from a derived class into baseclass but only base item will copy over
virtual function - in the base class wait till runtime.
pure virtual - when base class contain a function but doesnt know what function actually do
 << pure virtual = "0"

*/

class Pet{ //base class 
    string name;
    int petID;

public:
    Pet(int newID = 0) {
        petID = newID;
    }
    string getName() const{
        return name;
    }
    virtual void setName(string newName) {name = newName;} // when is virtual it will wait until CAT class is finished and call to see what CAT will say
    virtual void speak() const = 0; // pure virutal function
};
class Cat: public Pet{ // Cat is a PET // derived class
    double whiskerLength; // only in CAT class
public:
    Cat() : pet(10000){} // explicit call to base constructior
    void speak() const{
        cout << "MEOW!" << endl;
    }
    void setLength(double newLength);
    double getLength() const{return whiskerLength;} // get whiskerlength in cat class
    void setName(string newName);
    Cat& operator = (const Pet&);
};