#include <iostream>
#include <list>

using namespace std;

template <class T> class Queue {
  std:: list<T> data;

  public:
    void enqueue(T newItem) {
        data.push_back(newItem);
    }
    T dequeue() {
        return data.pop_front(); 
    }

    T top() const {
        return *data.begin();
    }
    bool isEmpty() const {
        return data.size() == 0;
    }

    int size() const {
        return data.size();
    }
    void clear() {
        data.clear();
    }
};


int main() {
    Queue<int> q;
    q.enqueue(20);
    q.enqueue(50);
    q.enqueue(30);
    //    3    2    1
    // 30,50, 20; 

    /*
    first in first out. when dequeue 20 will be pop out
    and then 50 then 30. 

    */
}