#include <iostream>
using namespace std;

int main() {
    Date d1;
    d1.setDay(6);
    d1.setMonth(8);
    d1.setYear(1991);
    cout << "Very important date: ";
    d1.displayDate();
}

class Date {
private:
    int day;
    int month;
    int year;
public:
//getter and setter
    void setDay(int newDay);
    void setMonth(int newMonth);
    
    void setYear(int newYear) {
        year = newYear;
    } 
    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }


void Date:: setDay(int newDay) {
    if(newDay > 0 && newDay <= 31)
        day = newDay; }
void Date:: setMonth(int newMonth) {
    if(newMonth > 0 && newMonth <=12) 
        month = newMonth; 
}
//print date DD/MM/YYYY function inside class
void displayDate() const {
    cout << day << "/" << month << "/ " << year;
}
//valide function to check if date is valide
//bool validate() const {
