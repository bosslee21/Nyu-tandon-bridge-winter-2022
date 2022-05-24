#include <iostream>
using namespace std;

int const MAX_STUDENT = 10;
int main() {
    int gradeList[MAX_STUDENT];
    int input;
    int grades;

    
    int sum;
    
    cout << "Please enter a number of student in a classroom: " << endl;
    cin >> input;
    
    
    cout << "please enter each students grade: ";
    for(int i = 0; i < input; i++) {
        cin >> grades;
        gradeList[i] = grades;
    }
    sum = 0;
    for(int i = 0; i <input; i++) {
        sum += gradeList[i];
    }
    double average = double(sum) / double(input);

    cout << "Student with grades higher than average is : ";
    for(int i = 0; i <= input; i++){
        if(average < gradeList[i]) {
            cout << gradeList[i] << " ";
        }
    }
    cout << endl;
    return 0;
}