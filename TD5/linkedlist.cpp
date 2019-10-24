#include <iostream>

#include "llist.hpp"

#include <cstdlib>

#include <ctime>

using namespace std;



ListNode::ListNode(int d, ListNode* nxt){
    data = d;
    next = nxt;
}

ListNode::~ListNode(){
    if (next != NULL) delete next;
}


LinkedList::LinkedList(){
    first = NULL;
    last = NULL;
}

// destroy the list pointed to by first (if any)
LinkedList::~LinkedList(){
    if (first!=NULL){
        delete first;
    }
}

// display the list on std::cout
void LinkedList::display(){
    int i;
    for (i=0;(first+i)<=last;i++){
        cout << (*(first+i)).data << ' '; 
    }
    cout<<endl;
}

// add an element to the end of the list. Should be O(1).
void LinkedList::append(int d){
    if (last==NULL){
        first = new ListNode(d);
        last = first;
    }else{
        (*last).next = new ListNode(d);
        last = last->next;
    }
}

// add an element to the start of the list. Should be O(1).
void LinkedList::prepend(int d){
    first = new ListNode(d,first);
    if (last==NULL) last = first;
}

// return a *new* list that contains all elements smaller than
// a threshold in this list
LinkedList* LinkedList::filterSmaller(int threshold){
    LinkedList* ret = new LinkedList;
    int i;
    for (i=0;(first+i)<=last;i++){
        if ((first+i)->data < threshold){
            (*ret).append((first+i)->data);
        }
    }
    return ret;
    
}

int main(){
    srand((unsigned)(time(NULL)));
    LinkedList* a = new LinkedList;
    int i;
    for (i=0;i<10;i++){
        int d = rand()%11;
        cout<< d << ' ';
        (*a).append(d);
    }
    a->display();
    cout<<endl;
    LinkedList* b = a->filterSmaller(5);
    b->display();
}