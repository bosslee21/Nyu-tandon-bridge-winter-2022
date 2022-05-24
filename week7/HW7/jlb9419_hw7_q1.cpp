#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay);
bool isLeapYear(int year);
int printLeapYear(int year);
void printYearCalender(int year, int startingDay);
int main() {
    int year;
    int startDay;
    cout << "Please enter a year: " << endl;
    cin >> year;
    cout << "Please enter a starting date 1-7. i.e 1 for Mon 2. tue: " << endl;
    cin >> startDay;
   
    printYearCalender(year,startDay);
    return 0;
}


int printMonthCalender(int numOfDays, int startingDay) {
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;
    for(int i = 1; i < startingDay; i++) {
        cout << '\t';
    }

    for(int i = 1; i <= numOfDays; i++) {
        if((startingDay + i - 1)  % 7 == 0) {
            cout << i << '\n';
        }
        else {
            cout << i << '\t';
        }
    }
    cout << endl;

    return (numOfDays + startingDay - 1) % 7;

}

bool isLeapYear(int outYear) {
    return (outYear % 4 == 0) && ((outYear % 100 != 0) || (outYear % 400 == 0));
}

int printLeapYear(int outYear) {
    if(isLeapYear(outYear)) {
        return 29;
    }
    else {
        return 28;
    }
}

void printYearCalender(int outYear, int startingDay) {
    cout << "January " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay);
    cout << endl;

    cout << "February " << outYear << endl;
    startingDay =  printMonthCalender(printLeapYear(outYear), startingDay + 1);
    cout << endl;

    cout << "March " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay + 1);
    cout << endl;

    cout << "April " << outYear << endl;
    startingDay = printMonthCalender(30,startingDay + 1);
    cout << endl;

    cout << "May " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay + 1);
    cout << endl;

    cout << "June " << outYear << endl;
    startingDay = printMonthCalender(30,startingDay + 1);
    cout << endl;

    cout << "July " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay + 1);
    cout << endl;
    
    cout << "August " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay + 1);
    cout << endl;

    cout << "September " << outYear << endl;
    startingDay = printMonthCalender(30,startingDay + 1);
    cout << endl;

    cout << "October " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay + 1);
    cout << endl;

    cout << "November " << outYear << endl;
    startingDay = printMonthCalender(30,startingDay + 1);
    cout << endl;

    cout << "December " << outYear << endl;
    startingDay = printMonthCalender(31,startingDay + 1);
    cout << endl;

}
