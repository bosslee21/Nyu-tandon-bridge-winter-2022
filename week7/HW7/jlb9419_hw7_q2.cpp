#include <iostream>
#include <cmath>

using namespace std;
void analyzeDividors(int num, int& outCountDiv, int& outSumDivs);
bool isPerfect(int num);
int main() {
    int input;
    int countDiv;
    int sumDiv;
    cout << "Please enter a positive integer  >= 2: ";
    cin >> input;

    analyzeDividors(input, countDiv,sumDiv);
    int counterPart;
    cout << "Perfect numbers between 2 and M are: ";
    for(int i = 2; i <= input; i++) {
        if(isPerfect(i)) {
            cout << i << " ";;
        } 
    }
    cout << endl << endl;

    cout << "Amicable pairs between 2 and M are: ";
    for(int i = 2; i <= input; i++) {
        int counterPart;
        
        analyzeDividors(i, countDiv, counterPart);
        analyzeDividors(counterPart, countDiv, sumDiv);
        if(i == sumDiv && i > counterPart){
            cout << "(" << counterPart << ", " << i << ")";
        }
  
    }
    cout << endl;
    
    


    return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
   int sum = 1;
   int count = 1;
   for(int i = 2; i <= sqrt(num); i++) {
       if(num % i == 0) {
           count += 2;
           sum += i + num / i;
       }
   }
   outCountDivs = count;
   outSumDivs = sum;
   
}

bool isPerfect(int num) {
    int sum;
    int count;
    analyzeDividors(num, count, sum);

    return num == sum;
}