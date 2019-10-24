#pragma once

class ListNode {
public:
  int data;
  ListNode *next;

  ListNode(int d, ListNode *nxt = NULL);
  ~ListNode();
};

class LinkedList {
private:
  ListNode *first, *last;

public:
  LinkedList();
  ~LinkedList();
  void display();
  void append(int d);
  void prepend(int d);
  LinkedList *filterSmaller(int threshold);
};
