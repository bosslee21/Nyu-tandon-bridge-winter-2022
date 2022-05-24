class Date{
    private:
        int day;
        int month;
        int year;
    public:
    Date() :day(1), month(1), year(1970) {} // member intialization list

    Date() {
            day = 1;
            month = 1;
            year = 1970;
            
        }
} 
// constructor take three int and create 3 int
Date(int newD, int newM, int newY); day(newD), month(newM),year(newY);

int main() {
    Date d2(6,8,1991);
}

/* Big 3 three function

Destrucotr - called automatically when the object fall out of scope

copy constructor - construct an object based on existing one

assigment operation - copies one object to another(deep copy)
    - be careful of avoiding x = x (self assignment use:)
    -if(this == &rhs) to avoid since if this and rhs is same



*/
