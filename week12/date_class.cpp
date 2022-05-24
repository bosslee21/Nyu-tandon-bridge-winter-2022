#include <iostream>
using namespace std;

int main(){
    Date d1;
    d1.setDay(6);
    d1.setMonth(8);
    d1.setYear(1991);

    cout << "very Important date:";
    d1.displayDate();
}

class Date {
    //public:
    private: // if we leave off public vs private private is default.

        int day;
        int month;
        int year;

};