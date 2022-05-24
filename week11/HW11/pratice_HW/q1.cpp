#include <iostream>
using namespace std;
void printTriangle(int n);
void printOpositeTriangle(int n);
void printRuler(int n);
int main() {
    printTriangle(4);
    
    cout << "Opposite Triangle" << endl;
    printOpositeTriangle(4);
   
    cout << "Print Ruler " << endl;
    printRuler(4);
    return 0;

}


void printTriangle(int n) {
    //base case when n == 0 return nothing
    if(n == 0) {
        return;
    }
    else{
        // when n > 0 
        // call self until base case is hit. 
        printTriangle(n-1); //2 //3//4
       // then start printing incrementing rows of astericks
       // starting with base case of 1.
        for(int i = 0 ; i < n; i++) {
            cout << "*";
        }
    }
    cout << endl;

}
//질문

void printOpositeTriangle(int n) {
    if(n == 0) {
        return;
    }
    else {
        for(int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << endl;

        printOpositeTriangle(n- 1); //3//2//1/0
        for(int i = 0; i < n; i++) { //4 //3 //2 //1
            cout << "*";
        }
        cout << endl;
    }
    
}

void printRuler(int n) {
    if(n == 1) {
        cout << "-" << endl;
    }
    else{
        // case: n > 1;
        // first call self until base case is hit
        printRuler(n -1);
        // then print n dashes each recusion. increasing since
        // we;re starting from the base case 1.
        for(int i = 0; i < n; i++) {
            cout << "-";
        }
        cout << endl;

        // 3. finally call self again to reverse the print
        // operations. printig the dashes in decreaseing
        // order until the base case.
        printRuler(n - 1);
    }
    

}