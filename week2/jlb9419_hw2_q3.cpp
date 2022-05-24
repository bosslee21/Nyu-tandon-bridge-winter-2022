#include <iostream>
using namespace std;

const int HOURS_TO_DAY = 24;
const int MINUTES_IN_HOUR = 60;

int main()
{
    int jDays, jHours, jMinutes;

    cout << "Please enter the number of days John has worked: ";
    cin >> jDays;

    cout << "Please enter the number of hours John has worked: ";
    cin >> jHours;

    cout << "Please enter the number of minutes of John has worked: ";
    cin >> jMinutes;
    
    cout << endl; 
    

    //bill variables
    int bDays, bHours, bMinutes;
    cout << "Please enter the number of days Bill has worked: ";
    cin >> bDays;

    cout << "Please enter the number of hours Bill has worked: ";
    cin >> bHours;

    cout << "Please enter the number of minutes of Bill has worked: "<<endl;
    cin >> bMinutes;

    int totalDays = jDays + bDays;
    int totalHours = jHours + bHours;
    int totalMinutes = jMinutes + bMinutes;

    totalDays += totalHours / HOURS_TO_DAY;
    totalHours %= MINUTES_IN_HOUR;

    totalHours = totalHours - HOURS_TO_DAY;
    totalMinutes %= MINUTES_IN_HOUR;

    cout << " The total time both of them worked together is : " << totalDays << " days, " << totalHours << " hours, " << totalMinutes << " minutes" << endl;

    // days hours and minutes
}