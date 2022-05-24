#include <iostream>
#include <vector>
using namespace std;



vector<int> merge(vector<int>& v1, vector<int>& v2);
void printVector(vector<int>& v);
vector<int> locateMinAndMax(vector<int>& a, int low, int high);

int main() {
    vector<int> v = {14,5,8,10,13,1,18};
    
    printVector(v);
    vector<int> minAndMax = locateMinAndMax(v, 0, v.size() - 1);
    
    printVector(minAndMax);

    return 0;
}

vector<int> locateMinAndMax(vector<int>& a, int low, int high) {
    if(low == high) {
        // initialize the element into both min and max if there is only 1 element.
        vector<int> minAndMax(2, a[low]);
        return minAndMax;
    }
    else{

        int mid = low + (high - low) / 2;
        vector<int> minAndMax1 = locateMinAndMax(a, low, mid);
        
        vector<int> minAndMax2 = locateMinAndMax(a, mid + 1, high);

        return merge(minAndMax1, minAndMax2);
    }
}

vector<int> merge(vector<int>& v1, vector<int>& v2) {
    //initialize 2 space in vector
    vector<int> minAndMax(2);

    minAndMax[0] = min(v1[0], v2[0]);
    minAndMax[1] = max(v1[1], v2[1]);

    return minAndMax;

}

void printVector(vector<int>& v) {
    cout << "[";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if( i != v.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}