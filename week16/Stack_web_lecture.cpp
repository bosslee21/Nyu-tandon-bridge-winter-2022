#include <iostream>
#include <list>

//stack code
using namespace std;

template<class T> class Stack {

  private:
    list<T> data;

  public:
    void push(T newItem) {
        data.push_front(newItem);
    }
    T pop() {
        return data.pop_front();
    }
    // point to the first element of the data list.
    T top() {
        return *data.begin();
    }
    bool isEmpty()const {
        return data.size() == 0;
    }

    int size()const {
        return data.size();
    }
    void clear() {
        data.clear();
    }
};



int main() {

   
    return 0;
}