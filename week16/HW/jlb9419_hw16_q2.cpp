#include <iostream>
#include <vector>
#include <queue>

using namespace std;


template<class T> class Queue {
  private:
    vector<T> q;
    int size;
    int front;
  public:
    
    Queue() {
        size = 0;
        front = 0;
    }
    void enterQue(T input) {
        q.push_back(input);
        size++;
    }
    T deleteQue() {
        // 1 2 3 4 5
        T temp = q[front];
        front++;
        return temp;
    }
    

    T top() {
        return q[front];
    }

    T position(int i) {
        return q[i];
    }
    int getFront() {
        return front;
    }
    int getSize() {
        return size;
    }
    bool isEmpty() {
        return size == 0;
    }
    void clear() {
        size = 0;
        front = 0;
        q.clear();
    }


};
void printVec(Queue<int> a) {
    for(int i = a.getFront(); i < a.getSize(); i++) {
        cout << a.position(i) << endl;
    }
   
}

int main() {
    Queue<int> v;
    //enter element into queue
    for(int i = 1; i <= 5; i++) {
        v.enterQue(i);
    }
    cout << "Printing elements in side vector" << endl;
    printVec(v);
    cout << endl;

    //delete element from queue
    // for(int i = 0; i < 5; i++) {
    //     v.deleteQue();
    // } 
    cout << "Delete 1 element from queue" << endl;
    v.deleteQue();
    v.deleteQue();
    printVec(v);
    
    
    //clearing the queue vector
    v.clear();

    printVec(v);

    

    return 0;
}

