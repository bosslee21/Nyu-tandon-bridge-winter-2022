

#include <iostream>
#include <cmath>
using namespace std;
/*  Input number of rows: 4       # 39                                        
       1                                                               
      2 3                                                              
     4 5 6                                                             
    7 8 9 10 */
int main()
{
    int input;
    int count= 1;
    cout << "enter" <<endl;
    cin >> input;
    
    int space = input + 3;
    for(int i = 0; i < input; i++) {
        for(int j = space; j > 0; j--) {
            cout<< " ";
        }
        for(int k = 0; k <= i; k++) {
            cout << count << " ";
            count++;
        }
        space--;
        cout << endl;
        
    }
    
   
   return 0;
}
