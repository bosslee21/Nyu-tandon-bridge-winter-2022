class Date {
    //public:
    private: // if we leave off public vs private private is default.

        int day;
        int month;
        int year;

};
// Accessors and mutatators

public:
    void setDay(int newDay);
    void setMonth(int newMonth);
    void setYear(int newYear) {year = newYear;}
    int getDay() const{return day;}
    int getMonth() const{return month;}
    int getYear() const{return year;}
};

void Date:: setDay(int newDay) {
    if(newDay > 0 && newDay <= 31)
        day = newDay;
}
void Date:: setMonth(int newMonth) {
    if(newMonth > 0 && newMonth <= 12) 
        month = newMonth;
}
