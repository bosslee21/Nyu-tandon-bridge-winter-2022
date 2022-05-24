#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

template<class T> class Queue {
  private:
    vector<T> q;
    int start;
    int size;
  public:

    void enqueue(T data) {
        q.push_back(data);
        size++;
    }

    T dequeue() {
        start++;
        T temp = q[start];
        size--;

        return temp;
    }

    T top() {
        return q[start];
    }
    bool isEmpty()const {
        return size == 0;
    }
    int Vsize() const {
        return size;
    }

    void clear() {
        q.clear();
        start = 0;
    }

    

};


int main() {
    Queue<int> v;

    for (int i = 0; i < 10; ++i) {
        v.enqueue(i);
    }

    for (int j = 0; j < 10; ++j) {
        v.dequeue();
    }

    cout << "size: " << v.Vsize() << endl;

    while (v.Vsize()) {
        cout << v.dequeue() << " ";
    }

    for (int i = 0; i < 12; ++i) {
        v.enqueue(i);
    }

    for (int j = 0; j < 7; ++j) {
        v.dequeue();
    }

    cout << "size: " << v.Vsize() << endl;

    while (v.Vsize()) {
        cout << v.dequeue() << " ";
    }

    return 0;
}