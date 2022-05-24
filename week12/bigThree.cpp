/* Big 3 three function

Destrucotr - called automatically when the object fall out of scope

copy constructor - construct an object based on existing one

assigment operation - copies one object to another(deep copy)
    - be careful of avoiding x = x (self assignment use:)
    -if(this == &rhs) to avoid since if this and rhs is same
*/

class Thing {
    int* value;
    public:
        Thing(int newVal = 0): value(new int(newVal)) {}
        ~Thing() {delete value;} // deconstructor
        Thing(const Thing& rhs) {value = new int(&rhs.value);}
        //copy constructor

        Thing& operator= (const Thing& rhs) {*value = *rhs.value;};
}