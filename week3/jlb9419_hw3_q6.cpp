/* Question 6:
Write a program that computes the cost of a long-distance call. The cost of the call is
determined according to the following rate schedule:
• Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is billed at a
rate of $0.40 per minute.
• Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is charged
at a rate of $0.25 per minute.
• Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.
The input will consist of the day of the week, the time the call started, and the length of the
call in minutes.
The output will be the cost of the call.
Notes:
1. The time is to be input in 24-hour notation, so the time 1:30 P.M. is input as 13:30
2. The day of the week will be read as one of the following two character string: Mo Tu
We Th Fr Sa Su
3. The number of minutes will be input as a positive integer.*/ 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    char split;
    int hours, minutes, lengthTalked;
    string days;
    double rate, totalCost;

    cout << "Enter the time as 24 hour format ex 1:30 PM as 13:30: ";
    cin >> hours >> split >> minutes;
    cout << "Enter the days as two character Monday as Mo: ";
    cin >> days;
    cout << "Enter the length of time you have talked on the phone: ";
    cin >> lengthTalked;

    if (hours < 24 && minutes < 60)
    {
        if (days == "Mo" || days == "Tu" || days == "We" || days == "Th" || days == "Fr")
        {
            if ((hours >= 8 && hours < 18) || (hours == 18 && minutes == 0))
            {
                rate = 0.40;
            }
            else
            {
                rate = 0.25;
            }
        }
        else
        {
            rate = 0.15;
        }
        totalCost = rate * lengthTalked;
        cout << fixed << showpoint << setprecision(2);
        cout << "Total cost of the call of " << lengthTalked << " minutes is $" << totalCost << endl;
    }
    else {
        cout << "Error invalid time format. " << endl;
    }
    
    
    
}