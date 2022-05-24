class Date {

private:
    int day;
    int month;
    int year;

public:
    // Member initialization list
    Date(): day(1), month(1), year(1970) {

    }
}

// 2nd Version
class Date {

private:
    int day;
    int month;
    int year;

public:
    // without Member initialization list
    Date() {
        day = 1;
        month = 1;
        year = 1970;
    }
}

// More Constructor 
