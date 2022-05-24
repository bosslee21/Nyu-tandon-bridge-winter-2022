#include <iostream>
#include <list>
using namespace std;
// queue -> first in first out
// enqueue -> add to the end
// dequeue remove from the front
// could also be vice -versa

template<class T> class Queue {
  private:
    list<T> data;
  public: 
    void enque( T newItem) {
        data.push_back(newItem);
    }
    T deque() {
        return data.pop_front();
    }
    T top()const {
        return *data.begin();
    }
    int size() const{
        return data.size();
    }

    void clear() {
        data.clear();
    }


};
