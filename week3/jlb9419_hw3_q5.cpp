/* Question 5:
Body mass index (BMI) is a number calculated from a person’s weight and height using the
following formula: 𝑤𝑒𝑖𝑔ℎ𝑡/ℎ𝑒𝑖𝑔ℎ𝑡!. Where 𝑤𝑒𝑖𝑔ℎ𝑡 is in kilograms and ℎ𝑒𝑖𝑔ℎ𝑡 is in meters.
According to the Centers for Disease Control and Prevention, the BMI is a fairly reliable
indicator of body fatness for most people. BMI does not measure body fat directly, but
research has shown that BMI correlates to direct measures of body fat, such as underwater
weighing and dual-energy X-ray absorptiometry. */

#include <iostream>
#include <cmath>
using namespace std;

const double ONE_POUND_IN_KILOGRAMS = 0.453592;
const double ONE_INCH_IN_METERS = 0.0254;

int main() {
    double pound,inch;
    double kilos,meters,bmi;
    string status;

    cout<< "Please enter weight (in pounds)";
    cin>> pound;
    cout<< "Please enter height (in inches)";
    cin>> inch;
    
    kilos = pound * ONE_POUND_IN_KILOGRAMS;
    meters = inch * ONE_INCH_IN_METERS;

    bmi = kilos / pow(meters,2);
    
    if(bmi < 18.5) {
        status = "Underweight";
    }
    else if(bmi < 25.0) {
        status = "Normal";
    }
    else if(bmi < 30.0) {
        status = "Overweight";
    }
    else {
        status = "Obese";
    }
    cout<< " The weight status is: " << status  << endl;
}