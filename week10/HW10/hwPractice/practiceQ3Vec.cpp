#include <iostream>
#include <vector>
using namespace std;
void version1();
vector<int> findMissing(vector<int> &v, int searchN);
void printMissing(vector<int> v, int searchNum);

int main() {
    version1();


    return 0;
}

void version1() {
    vector<int> v;

    cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
    cout << "End your input by typing -1." << endl;
    int input;

    while(true) {
        cin >> input;
        if(input == -1) {
            break;
        }
        else{
            v.push_back(input);
        }
    }
    

    cout << "Please enter a number you want to search." << endl;
    int searchNum;
    cin >> searchNum;

    vector<int> missingNumArr = findMissing(v,searchNum);
    printMissing(missingNumArr,searchNum);
    
    
 
    
}
vector<int> findMissing(vector<int> v, int searchN) {
    vector<int> newArr; 
    for(int i = 0; i < v.size(); i++) {
        if(searchN == v[i]) {
            newArr.push_back(i + 1);
        }
    }
    return newArr;

}

void printMissing(vector<int> &v, int searchNum) {
    if(v.empty()) {
        cout << "no matching sequence." << endl;
    }
    else{
        cout << searchNum << " shows in lines ";
        int count = 0;
        for(int i = 0; i < v.size(); i++) {
            if(count == 0) {
                cout << v[i];
                count++;
            }
            else{
                cout << ", " << v[i];
            }
        }
        cout << "." << endl;
    }
}
