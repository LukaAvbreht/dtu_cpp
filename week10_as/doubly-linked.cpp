//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
#include <stddef.h>
#include "doubly-linked.h"

using namespace std;

//// Basic structure to store elements of a list
//struct Node {
//    int val;        // contains the value
//    Node * next;    // pointer to the next element in the list
//    Node * prev;    // pointer to the previous element in the list
//};

// Class List
//class List {
//
//public:
//    List(void);             // Constructor
//    ~List(void);            // Destructor
//    void insert(int n);     // This should insert n in the list
//    void reverse(void);     // This should reverse the list
//    void print(void);       // This shoiuld print the list
//
//private:
//    Node * first;           // Pointer to the first (if any) element in the list
//
//};


List::List() {
  // contains the value
  this->first = NULL;
}

List::~List() {
  // contains the value
  delete this->first;
}

void List::insert(int n) {
  if (!this->first) {
    // Create new Node vith value val and add it as first Node
    this->first = new Node();
    this->first->val = n;
    this->first->next = NULL;
    this->first->prev = NULL;
    return;
  } else {
    // Create new Node vith value val and add it to the end of linked list
    // Find last Node with null pointer for next
    Node *curr_node = this->first;
    while (curr_node->next != NULL) {
      curr_node = curr_node->next;
    }
    // Create new node and add it as next to previous last node and also add the node as previous Node
    curr_node->next = new Node();
    curr_node->next->val = n;
    curr_node->next->prev = curr_node;
    curr_node->next->next = NULL;
    // Clean up
    // delete curr_node;
    return;
  }
}

void List::reverse() {
  if(this->first == NULL){
    return;
  } else {
    Node *temp_point;
    Node *curr_node = this->first;
    while (curr_node->next != NULL) {
      swap(curr_node->next,curr_node->prev);
      curr_node = curr_node->prev;
    }
    // our node in last node
    swap(curr_node->next,curr_node->prev);
    swap(this->first,curr_node);
    // Clean up
    // delete curr_node;
    // delete temp_point;
    return;
  }
}

void List::print(){
  if(this->first == NULL){
    cout << "";
    return;
  } else {
    Node *curr_node = this->first;
    while (curr_node->next != NULL) {
      cout << curr_node->val << " ";
      curr_node = curr_node->next;
    }
    cout << curr_node->val << endl;
    // Clean up
    // delete curr_node;
  }
}


int main() {
//
//  // How to alocate on heap
//
//  // This is on stack
//  Node tr_p = {3, NULL, NULL};
////  tr_p.val = 3;
////  tr_p.prev = NULL;
////  tr_p.next = NULL;
//
//  // Pointer to Node object on stack (how to do it on heap)
//  Node *p_demo = &tr_p;
//  new(p_demo) Node;
//
////  new(point) Node() = {3,NULL,NULL};
//  // Node *poi = new Node():;
//
//  //cout << p_demo->val << endl;
//

  List new_list;

  new_list.insert(3);

  new_list.insert(4);

  new_list.insert(5);

  new_list.insert(6);

  new_list.print();

  new_list.reverse();

  new_list.print();

  return 0;
}


