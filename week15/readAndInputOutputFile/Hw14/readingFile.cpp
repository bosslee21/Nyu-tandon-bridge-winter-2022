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

struct student {
    int id;
    double testScore;
    string name;

};

int main() {
    ifstream inFile;
    openInputfile(inFile);

    vector<student> vs;

    student temp;
    //input ID
    while(inFile >> temp.id) {
        // input test score.
        inFile >> temp.testScore;
        //ignore 9999 times of tap space after test score to get name as whole line.
        inFile.ignore(9999,'\t');

        //read rest of the line. 
        getline(inFile, temp.name);

        //store all tghe temp into vector. 
        vs.push_back(temp);
    }
    for(student s: vs) {
        if(s.testScore > 90)
        cout << s.name << endl;
    }
}