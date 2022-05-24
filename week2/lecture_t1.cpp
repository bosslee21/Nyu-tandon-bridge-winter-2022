#include <iostream>
#include<cmath>

using namespace std;

int main() {
    double celcius, farenhite;



    cout<< "what is the farenhite" << endl;
    cin >> farenhite;
    
    celcius = (farenhite -32) * 5.0 /9.0;
    cout<<  "The celcius of farenhite " << farenhite << " is " << celcius <<endl;

    


    return 0;

}


