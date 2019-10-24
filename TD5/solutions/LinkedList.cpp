#include <iostream>

#include "LinkedList.hpp"

#include <cstdlib>

#include <ctime>

using namespace std;

ListNode::ListNode(int d, ListNode* nxt)
{
  data = d;
  next = nxt;
}

ListNode::~ListNode()
{
  if (next != NULL) delete next;
}

LinkedList::LinkedList()
{
  first = NULL;
  last = NULL;
}

LinkedList::~LinkedList()
{
  if (first != NULL) delete first;
}

void LinkedList::append(int d)
{
  if (last == NULL) {
    // first must also be NULL
    first = new ListNode(d);
    last = first;
  } else {
    last->next = new ListNode(d);
    last = last->next;
  }
}

void LinkedList::prepend(int d)
{
  first = new ListNode(d, first);
  if (last == NULL) last = first;
}

void LinkedList::display()
{
  ListNode *cur = first;
  if (cur == NULL) {
    std::cout << "--" ;
    return;
  }
  while (cur->next != NULL) {
    std::cout << cur->data << " ";
    cur = cur->next;
  }
  std::cout << cur->data << std::endl;
}

LinkedList* LinkedList::filterSmaller(int threshold)
{
  LinkedList* ret = new LinkedList;
  for (ListNode *cur = first; cur != NULL; cur = cur->next)
    if (cur->data <= threshold)
      ret->append(cur->data);
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