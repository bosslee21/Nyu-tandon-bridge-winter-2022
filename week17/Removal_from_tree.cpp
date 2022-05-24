#include <iostream>
using namespace std;


//removal, NO Child
template <class T> 
void BST <T>:: remove(BSTNode <T>*& temp) {
    if(temp->left == nullptr && temp->right == nullptr) { // no child
        
        // need to determine if this is the root, or left / right of parent
        if(temp->parent == nullptr) { // last node on the tree
            root = nullptr
        }
        else if(temp->parent->left == temp){
            temp->parent->left = nullptr;
        }
        else {
            temp->parent->right = nullptr;
        }
        delete temp;
    }
    // =========REMOVE ONE CHILD ==================  
     //removal one child == below==
    else if(temp->left == nullptr)  {// we have right child but no left child
        BSTNode<T>* toDelete = temp->right;
        temp->data = toDelete->data;
        temp->left = toDelete->left;
        if(temp->left != nullptr;) {
            temp->left->parent = temp;
        }
        temp->right = toDelete->right;
        if(temp->right != nullptr;) {
            temp->right->parent = temp;
        } 
        delete toDelete;
    }
    //we have left child but no right child
    else if(temp->right == nullptr)  {// we have right child but no left child
        BSTNode<T>* toDelete = temp->left;
        temp->data = toDelete->data;
        temp->left = toDelete->left;
        if(temp->left != nullptr;) {
            temp->left->parent = temp;
        }
        temp->right = toDelete->right;
        if(temp->right != nullptr;) {
            temp->right->parent = temp;
        } 
        delete toDelete;
    }
    // ===== REMOVE GIVEN TWO CHILDREN =====
    else {
        BSTNode<T>* minOfRight = temp->right;
        while(minOfRight->left != nullptr)  {// go right and left..left..left and find item last node
            //recursion go left
            minOfRight = minOfRight->left;   
        }
        temp->data = minOfRight->data;
        remove(minOfRight); //recursion! buyt no infinite becase no left child
    }
}



int main() {


    return 0; 
}