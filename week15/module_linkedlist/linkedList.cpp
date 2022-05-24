#include <iostream>
using namespace std;
/*
stopping at the end: while(temp->next!= nullptr)
- exclude last node since it will stop before last node.


going off at the end: while(temp!= nullptr)
- useful if we want to count total number of node
*/
template <class T>
class LList{
    LListNode<T>* head;
    LListNode<T>* recursiveCopy(LListNode<T>* rhs);

  public:
    LList() : head(nullptr) {}
    //copy // assigment / destructor
    LList(const LList& rhs) : head(nullptr) {
        *this = rhs
    }
    ~Llist() {
        clear();
    }
    //=======
    void insertAtHead(T newdata);
    T removeFromHead();

    bool isEmpty() const {
        return head == nullptr;
    }

    void clear();

    void insertAtEnd(T newdata);

    void inserAtpoint(LList <T>* ptr, T newdata);

    int size() const;
};

template<classT>
LListNode<T>* LList<T>::recursiveCopy(LListNode<T>* rhs) {
    if(rhs == nullptr) {
        return nullptr
    }
    return new LListNode<T> (rhs-> data,recursiveCopy(rhs->next));
}

template <class T> 
class LListNode {
    T data; // item to be stored
    LListNode<T>* next; // pointer to the next node.
  
  public:
  // constructor
    LListNode(T newdata = T(), LListNode<T>* new Next = nullptr) : 
    data(newdata), next(newNext) {

    }
    friend class LList <T>;
};



int main() {

    return 0;
}