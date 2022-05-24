#include <iostream>
using namespace std;
const int PRICE = 99;

int main() {
    int quanity, discount;
    double total;

    cout << "Please enter the number of packaged purchased" << endl;
    cin >> quanity;

    if(quanity >= 10 && quanity <= 19) {
        discount = (quanity * PRICE) * 0.10;
    }
    else if(quanity >= 20 && quanity <= 49) {
        discount = (quanity * PRICE) * 0.20;
    }
    else if(quanity >= 50 && quanity <= 99) {
        discount = (quanity * PRICE) * 0.30;
    }
    else if(quanity >= 100) {
        discount = (quanity * PRICE) * 0.40;
    }
    else {
        discount = 0;
    }
    total = (PRICE * quanity) - discount;
    cout << "The total purchase is " << quanity << " and price after discount is: " << total << endl;




    




    return 0;
}