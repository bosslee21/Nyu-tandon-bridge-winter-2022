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

    void enQueue(T input) {
        q.push_back(input);
        size++;
    }
    T deleteQue() {
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

}

int main() {
    Queue<int> v;
    for(int i = 0; i <= 5; i++) {
        v.enQueue(i);
    }

    return 0;
}