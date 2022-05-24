#include <iostream>
#include <vector>
using namespace std;
vector<int> divide(vector<int>& v, int low, int high);
vector<int> merge(const vector<int>& m1, const vector<int>& m2);
void printVector(vector<int>& v);
int main() {
    vector<int> v = {12,4,5,6,1,3,2,9};
    printVector(v);
    vector<int> findMinandMax = divide(v, 0, v.size()-1 );
    printVector(findMinandMax);
    
    

    return 0;
}

vector<int> divide(vector<int>& v, int low, int high) {
    // base case
    if(low == high) {
        vector<int> minAndMax(2,v[low]);
        return minAndMax;
    }
    else {
        //3,1,0
        int mid = low +(high - low) / 2;

        vector<int> m1 = divide(v,low,mid);

        vector<int> m2 = divide(v,mid+1, high);

        return merge(m1,m2);

    }
}

vector<int> merge(const vector<int>& m1, const vector<int>& m2) {
    vector<int> maxAndMin(2);

    maxAndMin[0] = min(m1[0],m2[0]);
    maxAndMin[1] = max(m1[1],m2[1]);

    return maxAndMin;
}

void printVector(vector<int>& v) {
    cout << "[";
    for(int i = 0; i < v.size(); i++) {
        if(i != v.size()-1) {
            cout << v[i] << ", ";
        }
        else{
            cout << v[i];
        }
    }
    cout << "]" << endl;
}