#include <iostream> 
#include <fstream>
using namespace std;
// when opening a file if file exist it will be overwritten(erase currnt)
// when file does not exist it will be created to new file
//when you open the the file you must close file ex. outFile.close;

int main() {
    //open file and output anything.
    ofstream outFile; //ofstream outfile("outfile.txt");

    outFile.open("outfile.txt");
    //outFile << "Hello world" << endl;
    
    for(int i = 100; i >= 0; i-= 10) {
        outFile << i << endl;
    }

  //  outFile.close;

    


    return 0;
}