#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class Solution{
  public:

  //adding node as casual
  Node *insert(Node *head, int x) {
       Node* newNode = new Node();
       newNode->data = x;
       newNode->next = NULL; 
    }
    
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* newNode = new Node();
       newNode->data = x;
       newNode->next = head; 
       head = newNode; 
    }

    //insert middle of the linkedlist
    void insertAfter(Node* prev_node, int new_data){
     // 1. Check if the given prev_node is NULL
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    // 2. Allocate new node
    Node* new_node = new Node();
 
    // 3. Put in the data
    new_node->data = new_data;
 
    // 4. Make next of new node as
    // next of prev_node
    new_node->next = prev_node->next;
 
    // 5. move the next of prev_node
    // as new_node
    prev_node->next = new_node;
}
    /*
    Node *insertAtMid(Node *previous_node, int x) {
        if(previous_node == NULL) {
            cout << "This cannot be Null";
            return;
        }
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = previous_node->next;
        previous_node->next = newNode;
        
    }
    */



//insert new node at the end

void append(Node** head_ref, int new_data) 
{ 
   
    // 1. allocate node
    Node* new_node = new Node();
   
    // Used in step 5
    Node *last = *head_ref;
   
    // 2. Put in the data
    new_node->data = new_data; 
   
    // 3. This new node is going to be 
    // the last node, so make next of 
    // it as NULL
    new_node->next = NULL; 
   
    // 4. If the Linked List is empty,
    // then make the new node as head
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
   
    // 5. Else traverse till the last node
    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    // 6. Change the next of last node
    last->next = new_node; 
    return; 
} 

    /* simplify

    Node *insertAtEnd(Node *head, int x)  {
        Node* newNode = new Node();
        Node* last = head;
        newNode->data = x;
        new_node->next = NULL;
        
        //if linkedlist is empty make a newone.
        if(head == NULL) {
            head = newNode;
            return;
        }
        while(last->next!= NULL) {
            last = last->next;
        }
        last->next = newNode;
        return;
        
    }

    */
    
};


int main() {

}