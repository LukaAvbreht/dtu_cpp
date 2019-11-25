//
// Created by Luka Avbreht on 2019-11-18.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>
#include <stddef.h>

using namespace std;

struct Node {
    int val;        // contains the value
    Node * left;    // pointer to the next element in the list
    Node * right;    // pointer to the previous element in the list
};

int fib(int n){
  if(n == 0){
    return 1;
  }
  else if(n == 1){
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

class Fib_tree {

public:
    Fib_tree(int n);             // Constructor
    ~Fib_tree(void);
    string print();
    string print_(Node *x);     // This should insert n in the list
    void extend(Node *x);
    int size();
    int leafs();
    int depth();


private:
    Node * root;           // Pointer to the first (if any) element in the list
    int depth_ = 1;
    int leafs_ = 0;
    int size_ = 1;

};

Fib_tree::Fib_tree(int n){
  this->root = new Node();
  this->root->val = n;
  this->root->left = NULL;
  this->root->right = NULL;

  this->depth_ = n;
  if(n == 1){
    this->leafs_ = 1;
  } else if(n==0){
    this->leafs_ = 1;
    this->depth_ = 1;
  }

  this->extend(this->root);
}

Fib_tree::~Fib_tree(){
  delete this->root;
}

void Fib_tree::extend(Node *x){
  if(x->val == 1 or x->val == 0){
    return;
  } else {
    this->size_ += 2;

    Node *left_node = new Node();
    if(x->val-1 == 0 or x->val-1 == 1){
      this->leafs_ += 1;
    }
    left_node->val = x->val-1;
    left_node->left = NULL;
    left_node->right = NULL;
    x->left = left_node;
    this->extend(left_node);

    Node *right_node = new Node();
    right_node->val = x->val-2;
    if(x->val-2 == 0 or x->val-2 == 1){
      this->leafs_ += 1;
    }
    right_node->left = NULL;
    right_node->right = NULL;
    x->right = right_node;
    this->extend(right_node);
  }
}

string Fib_tree::print_(Node *x){
  if (x == NULL){
    return "";
  } else if(x->val == 0 or x->val == 1){
    return "1";
  } else {
    return to_string(fib(x->val)) + " " + this->print_(x->left) + " " + this->print_(x->right);
  }
}

string Fib_tree::print(){
  return this->print_(this->root);
}

int Fib_tree::size() {
  return this->size_;
}

int Fib_tree::leafs() {
  return this->leafs_;
}

int Fib_tree::depth() {
  return this->depth_;
}

int main(){
  int nn;
  cin >> nn;

  Fib_tree ft(nn);

  cout << "Call tree in pre-order: " << ft.print() << endl;
  cout << "Call tree size: " << ft.size() << endl;
  cout << "Call tree depth: " << ft.depth() << endl;
  cout << "Call tree leafs: " << ft.leafs() << endl;


  return 0;
}
