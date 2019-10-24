#include <iostream>

using namespace std;

class ListNode {
  public:
    int data;
    ListNode *next;

    // create a single node with data d
    // and optional next node
    ListNode(int d, ListNode* nxt = NULL){
        data = d;
        next = nxt;
    }

    // delete this node and all successor nodes
    ~ListNode(){
        if (next != NULL) delete next;
    }
};

class LinkedList {
  private:
    ListNode *first, *last;

  public:
    // create an empty list
    LinkedList(){
        first = NULL;
        last = NULL;
    }

    // destroy the list pointed to by first (if any)
    ~LinkedList(){
        if (first!=NULL){
            delete first;
        }
    }

    // display the list on std::cout
    void display(){
        int i;
        for (i=0;(first+i)<=last;i++){
            cout << (*first).data << ' '; 
        }
        cout<<endl;
    }

    // add an element to the end of the list. Should be O(1).
    void append(int d);

    // add an element to the start of the list. Should be O(1).
    void prepend(int d);

    // return a *new* list that contains all elements smaller than
    // a threshold in this list
    LinkedList* filterSmaller(int threshold);
};