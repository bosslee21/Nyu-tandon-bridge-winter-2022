#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

class Money {
  private:
    long all_cents;
  public:
    Money(long dollars, int cents) {
        all_cents = (dollars * 100) + cents;
    }

    Money(long dollars) {
        all_cents = dollars * 100;
        
    }

    Money() {
        all_cents = 0;
    }

    double get_value() const {
        return all_cents / 100.0;
    }

    
    friend Money operator +(const Money& amount1, const Money& amount2) {
        long amount = amount1.all_cents + amount2.all_cents;
        return Money(amount / 100, amount % 100);
    }

    friend Money operator -(const Money& amount1, const Money& amount2) {
        long amount = amount1.all_cents - amount2.all_cents;
        return Money(amount / 100, amount % 100);
    }

    friend Money operator -(const Money& amount) {
        long negativeAmount = -amount.all_cents;
        return Money(negativeAmount / 100, negativeAmount % 100);
    }

    friend bool operator ==(const Money& amount1, const Money& amount2) {
        return amount1.all_cents == amount2.all_cents;
    }

    friend bool operator <(const Money& amount1, const Money& amount2) {
        return amount1.all_cents < amount2.all_cents;
    }
    
    friend istream& operator >>(istream& ins, Money& amount) {
        char temp;
        long dollars;
        int cents;

        ins >> temp;
        bool isNegative = false;
        if (temp == '-') {
            isNegative = true;
            ins >> temp;
        }

        ins >> dollars >> temp >> cents;

        long valueAmount = dollars * 100 + cents;
        if(isNegative) {
            amount.all_cents = -valueAmount;
        }
        else{
            amount.all_cents = valueAmount;
        }
        
        return ins;
    }
    
    friend ostream& operator <<(ostream& outs, const Money& amount) {
        long valueAmount = amount.all_cents;
       
        if (amount.all_cents < 0) {
            outs << "-";
            valueAmount = -amount.all_cents;
        }
        
        outs << "$" << valueAmount / 100 << "." << valueAmount % 100;
        return outs;
    }

};
class Check {
  private:
    int checkNumber;
    Money checkAmount;
    bool isCashed;
  public:
    
    Check(int checkNumber, long dollars, int cents, bool isCashed) {
        this->checkNumber = checkNumber;
        this->checkAmount = Money(dollars, cents);
        this->isCashed = isCashed;
        
    }
    Check(int checkNumber, Money amount, bool isCashed) {
        this->checkNumber = checkNumber;
        this->checkAmount = amount;
        this->isCashed = isCashed;
    }

    Check() {
        this->checkNumber = 0;
        this->checkAmount= 0;
        this->isCashed = false;
    }
    
    int getCheckNumber() const {
        return checkNumber;
    }

    void setCheckNumber(int checkNumber)  {
        this->checkNumber = checkNumber;
    }

    Money getCheckAmount() const {
        return checkAmount;
    }

    void setCheckAmount(Money checkAmount) {
        this->checkAmount = checkAmount;
    }

    bool getIsCashed() const {
        return isCashed;
    }

    void setIsCashed(bool isCashed) {
        this->isCashed = isCashed;
    }

    // Compare by check number.
    friend bool operator <(const Check& check1, const Check& check2) {
        return check1.checkNumber < check2.checkNumber;
    }

    friend istream& operator >>(istream& ins, Check& check) {
        int checkNumber;
        char isCashed;
        Money checkAmount;
       
        ins >> checkNumber >> checkAmount >> isCashed;
        
        check.checkNumber = checkNumber;
        check.checkAmount = checkAmount;
        
        if(isCashed == 'y' || isCashed == 'Y') {
            check.isCashed = true;
        }
        else {
            check.isCashed = false;
        }


        return ins;
    }
    
    
    friend ostream& operator <<(ostream& outs, const Check& check) {
        string cashedString;
        if (check.isCashed) {
            cashedString = "y";
        } else {
            cashedString = "n";
        }
        outs << check.checkNumber << " " << check.checkAmount << " " << cashedString;
        
        return outs;
    }


};

int main() {
   
    Money startingBalance;
    cout << "Please enter your starting balance in a format: $##.## " << endl;
    cin >> startingBalance;

    int numOfCheck;
    cout << "Please enter number of checks " << endl;
    cin >> numOfCheck;
    
    Check checks[numOfCheck];
    if (numOfCheck > 0) {
        cout << "For each check, please enter your check numbers  (sepearated by a space)" << endl;
        cout << "The amount of check in a format: $##.## " << endl;
        cout << "and wheather it has been cashed or not (separated by space)" << endl;
        cout << "Type (y/Y) for Yes and  (n/N) for no " << endl;
        cout << "In a format: ### $##.## Y/N (e.g. 123 $40.12 N)" << endl;
        for(int i = 0; i < numOfCheck; i++) {
            cin >> checks[i];
        }
    }

    int numOfDeposit;
    cout << "Please enter numbers of deposit you will make:"  << endl;
    cin >> numOfDeposit;

    Money deposit[numOfDeposit];
    if (numOfDeposit > 0) {
        cout << "Please enter each deposit amount in a format: $##.##" << endl;
        for(int i = 0; i < numOfDeposit; i++) {
            cin >> deposit[i];
        }
    }

    cout << "The total amount of cashed check is: ";
    Money cashedTotal;
    for(int i = 0; i < numOfCheck; i++) {
        if(checks[i].getIsCashed()) {
            cashedTotal = cashedTotal + checks[i].getCheckAmount();
        }
    }
    cout << cashedTotal << endl;

    cout << "The total amount of deposit is: ";
    Money depositTotal;
    for(int i = 0; i < numOfDeposit; i++) {
        depositTotal = depositTotal + deposit[i];
    }
    cout << depositTotal << endl;

    cout << "The new balance is: ";
    Money newBalance = startingBalance + depositTotal - cashedTotal;
    cout << newBalance << endl;
    
    cout << "The difference from bank balance is: (I assume bank amount is the balance "
         << "which not cashed check is also accounted, thus subtracted.) ";
    Money checkTotal;
    for(int i = 0; i < numOfCheck; i++) {
        checkTotal = checkTotal + checks[i].getCheckAmount();
    }
    Money diffBalance = checkTotal - cashedTotal;
    if (diffBalance < Money()) {
        diffBalance = -diffBalance;
    }
    cout << diffBalance << endl;

    cout << "Checks cashed: " << endl;
    sort(checks, checks + numOfCheck);
    for(int i = 0; i < numOfCheck; i++) {
        if (checks[i].getIsCashed()) {
            cout << checks[i] << endl;
        }
    }
    cout << endl;

    cout << "Checks not cashed: " << endl;
    for(int i = 0; i < numOfCheck; i++) {
        if (!checks[i].getIsCashed()) {
            cout << checks[i] << endl;
        }
    }
    cout << endl;

    cout << "DONE" << endl;
}