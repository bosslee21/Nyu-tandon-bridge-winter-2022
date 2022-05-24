#include <iostream>
using namespace std;


class Node {
  public:
    int value;
    Node* next;

};
//printing linkedList
// need parameter to be head
void printList(Node* h) {
    while(h != NULL) {
        cout << h->value << endl;
        h = h->next;
    }
}

int main() {
    // link list have 3 element
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    //initialize
    head->value = 1;
    //head element points to next and next is second
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;
    
    // head is the start of linkedList
    printList(head);

    return 0;

}