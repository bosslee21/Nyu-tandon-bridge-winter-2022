#include <iostream>
#include <list>
using namespace std;


// push -> add to the stack
// pop -> remove from the stock from the top
// clear() , isEmpty, size
// big 3 if array 

//std list class where big3 is already built
template <class T> class Stack {
  private:
    list<T> data;
  public:
    
    void push(T newItem) {
        data.push_front(newItem);
    }
    T pop() {
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


    return 0;
}