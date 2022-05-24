#include <iostream>
#include <queue>
#include <string>
using namespace std;




// in Order Tree
template <class T> 
void BST<T>:: printInOrder(BSTNode<T>* node) {
    if(node!= nullptr) {
        printInOder(node->left);
        cout << node->data << ",";
        printInOrder(node->right);
    }
}
// Pre order
template<class T>
void BST<T>:: printPreOrder(BSTNode<T>* node) {
    if(node!= nullptr) {
        cout << node->data << ",";
        printPreOrder(node->left);
        printPreOrder(node->right);
    }
}
// post order
template<classT>
void BST<T>:: printPostOrder(BSTNode<T>* node) {
    if(node != nullptr) {
        printPostOrder(node->left);
        printPostOrder(node->right);
        cout << node->data << ",";
    }
}

// BFS(breadth first search) Level order

template<classT>
void BST<T>:: printLevelOrder() {
    queue<BSTNode<T>*> q;
    q.push(root);

    while(!q.empty()) {
        BSTNode<T>* temp = q.front();
        q.pop();
        cout << temp->data << ",";

        if(temp->left!= nullptr) {
            q.push(temp->left);
        }
        if(temp->right != nullptr) {
            q.push(temp->right);
        }
    }

}

/*
Tree Traversals.

In Order -
Process left node recursively first > then this node -> then right node

Pre Order -

This node first -> left node - > right node .

Post Order -

left node first -> right node - > this Node


Level  Order - 
Process in Depth (Breadth first Search )
lookng at the tree and outward of the level. 

Search for file system  : search higher stuff and then lower stuff



*/

int main() {


    return 0;
}