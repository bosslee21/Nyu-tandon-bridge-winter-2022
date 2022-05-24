#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


void openInputfile(ifstream& inFile) {
    string fileName;
    cout << "what is file name" << endl;
    cin >> fileName;
    inFile.open(fileName);

    while(!inFile) {
        cout << "File failed to open!" << endl;
        cout << "what is file name" << endl;
        cin >> fileName;
        //clear fail state and then try to open it again with better name;
        inFile.clear();
        inFile.open(fileName);
    }
}

int main() {
    ifstream inFile;
    openInputfile(inFile);

    vector<int> v;
    int temp;
    while(inFile >> temp) {
        v.push_back(temp);
    }
    
    double sum = 0;
    for(int item: v) {
        sum += item;
    }

    cout << "average of number is " << sum / v.size() << endl;
    return 0;
}