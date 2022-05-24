/* Question 2:
Write a program that:
• Asks the user for their name.
• Asks the user to input their graduation year.
• Asks the user to input the current year.
Assume the student is in a four-year undergraduate program. Display the current status the
student is in. Possible status include: not in college yet, freshman, sophomore, junior, senior,
graduated.
Note: If graduation year equals to current year, status is ‘Graduated’; if graduation year is
four years after current year, status is ‘Freshman */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int gradYear,currentYear,status;

    cout<< " Please enter your name: ";
    cin>> name;
    cout<< "Please enter your graduation year: ";
    cin>> gradYear;
    cout<< "Please enter current year: ";
    cin>> currentYear;

    status = gradYear - currentYear;
    if (status <= 0 ){
        cout<< name << ", you are graduated"<<endl;
        
    }
    else if(status == 1) {
        cout<< name << ", you are a Senior"<<endl;
    }
    else if(status == 2) {
        cout<< name << ", you are a Junior"<<endl;
    }
    else if(status ==3) {
        cout<< name << ", you are a Sopohomore"<<endl;

    }
    else if(status ==4) {
        cout<< name<< ", you are a Freshman"<<endl;

    }
    else {
        cout<< name << " you are not old enough for college" <<endl;
    }
    

    return 0;
}
