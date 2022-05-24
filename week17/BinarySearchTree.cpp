#include <iostream>
using namespace std;


template<class T> class BSTNode {
  private: 
    T data;
    BSTNode<T>* parent;
    BSTNode<T>* left;
    BSTNode<T>* right;

  public:
  //constructor 
    BSTNode(T newdata = t(),BSTNode<T>* newParent = nullptr, BSTNode<T>* newLeft = nullptr, BSTNode<T>* newRight = nullptr ) { // : data(newdata), parent(newParent),left(newLeft),right(newRight);
        this->data - newdata;
        this->parent = newParent;
        this->left = newLeft;
        this->right = newRight;
    }

    
    
    friend class BST<T>;
    int getSize() const;

   
};
//recursion in  trees.  keep calling getSize() function 
// impleent this in the BSTNnode class 
template<class T> 
int BSTNode<T>:: getSize() const {
    int count = 1;
    if(left != nullptr) 
        count += left-> getSize();
    if(right != nullptr)
        count+= right->getSize();

    return count;
}

int main() {


    return 0;

}






/*
- Each node only a left and right pointer
- BST designed in such a way left point to node that value is less
  and right point to value greater than or equal

      (root)
        20

    5 /           \30

3       10 /   \ 25


BST prvides best case:
    - Search in O(logN)
    - Insertion in O(log N)
    - Deletion in O(log N)

        worse case O(N)

*/