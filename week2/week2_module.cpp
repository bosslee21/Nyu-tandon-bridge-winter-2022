#include <iostream>
#include <cmath>

using namespace std;


int main() {
    

    double radius, area;

    cout << " Please enter the radius: "<< endl;
    cin >> radius;
    area = radius * radius * M_PI;
    
    cout<< "The area of the circle is " << area << endl;


    
    return 0;

}