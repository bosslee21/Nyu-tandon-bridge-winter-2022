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
    Check(int checkNumber, long dollar, int cents, bool isCashed) {
        this-> checkNumber = checkNumber;
        this-> checkAmount = Money(dollar,cents);
        this-> isCashed = isCashed;
    }

    Check(int checkNumber, long dollar, bool isCashed) {
        this-> checkNumber = checkNumber;
        this-> checkAmount = Money(dollar);
        this-> isCashed = isCashed;
    }

    Check() {
        this-> checkNumber = 0;
        this-> checkAmount = 0;
        this-> isCashed = false;
    }

    int getCheckNumber() const {
        return checkNumber;
    }
    void setCheckNumber(int checkNumber) {
        this-> checkNumber = checkNumber;
    }
    Money getCheckAmount() const {
        return checkAmount;
    }
    void setCheckAmount(Money checkAmount) {
        this-> checkAmount = checkAmount;
    }
    bool getIsCashed() const{
        return isCashed;
    }
    void setIsCashed(bool isCashed) {
        this-> isCashed = isCashed;
    }
    friend istream& operator >>(istream& ins, Check& check) {
        int checkNumber;
        Money checkAmount;
        char isCashed;
        
        ins >> checkNumber >> checkAmount >> isCashed;

        check.checkNumber = checkNumber;
        check.checkAmount = checkAmount;
        if(isCashed == 'Y'|| isCashed == 'y') {
            check.isCashed = true;
        }
        else{
            check.isCashed = false;
        }

        return ins;

        


    }
    // 123 $24.12 y
    friend ostream& operator <<(ostream& outs, const Check& check) {
        string cashChecked;
        if(check.isCashed) {
            cashChecked = "Y";
        }
        else{
            cashChecked = "N";
        }

        outs << check.checkNumber << " " <<  check.checkAmount << " " << cashChecked;
        
       return outs;
    }
    

};











int main() {
    
    Money startingBalance;
    cout << "Please enter your starting balance in a format: $##.## " << endl;
    cin >> startingBalance;

    int numberOfCheck;
    cout << "Please enter number of checks " << endl;
    cin >> numberOfCheck;
    
    Check check[numberOfCheck];
  
    cout << "For each check, please enter your check numbers  (sepearated by a space)" << endl;
    cout << "The amount of check in a format: $##.## " << endl;
    cout << "and wheather it has been cashed or not (separated by space)" << endl;
    cout << "Type (y/Y) for Yes and  (n/N) for no " << endl;
    
    for(int i = 0; i < numberOfCheck; i++) {
        cin >> check[i];
    }
    

    int numberOfDeposit;
    cout << "Please enter numbers of deposit you will make:"  << endl;
    cin >> numberOfDeposit;

    Money deposit[numberOfDeposit];
    cout << "Please enter each deposit amount in a format: $##.##" << endl;
    for(int i = 0; i < numberOfDeposit; i++) {
        cin >> depost[i];
    }

    cout << "Total of check Cashed: ";
    Money totalCheckCashed;
    for(int i = 0; i < numberOfCheck; i++) {
        if(check[i].getIsCashed()) {
            totalCheckCashed = totalCheckCashed + check[i].getCheckAmount;
        }
    }
    cout << totalCheckCashed << endl;

    cout << " the total of the deposit: ";

    Money totalDeposit;
    for(int i =0; i < numberOfDeposit; i++) {
        totalDeposit = deposit[i];
    }
    cout << totalDeposit << endl;

    cout << "The new balance is: ";
    Money newBalance = startingBalance + totalDeposit - totalCheckCashed;
    cout << newBalance << endl;

    Money checkTotal;
    for(int i = 0; i < numberOfCheck; i++) {
        checkTotal = checkTotal + check[i].getCheckAmount();
    }

    Money diffInBalance = startingBalance - totalCheckCashed + totalDeposit;

    cout << "Checks cashed: " << endl;
    for(int i = 0; i < numberOfCheck; i++) {
        if(check[i].getIsCashed) {
            cout << check[i] << endl;
        }
    }
    

    cout << "Checks not cashed: " << endl;
    for(int i = 0; i < numberOfCheck; i++) {
        if(!check[i].getIsCashed) {
            cout << check[i] << endl;
        }
    }
    cout << endl;

    cout << "Done";
    




}