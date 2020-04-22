#include <iostream>
#include "ex04-library.h"

using namespace std;

// Exercise 4 (a)
template <class C>
Monoid<C>::Monoid(C constant){
    // Put your code here
    this->constant = constant;
    this->m1 = nullptr;
    this->m2 = nullptr;
}

// Exercise 4 (b)
template <class C>
Monoid<C>::Monoid(Monoid<C> & m1, Monoid<C> & m2){
    // Put your code here
    this->m1 = new Monoid(* m1);
    this->m2 = new Monoid(* m2);
}

// Exercise 4 (c)
template <class C>
Monoid<C>::Monoid(Monoid & m){
    // Put your code here
    this->constant = m->constant;
    this->m1 = m->m1;
    this->m2 = m->m2;
}

// Exercise 4 (d)
template <class C>
Monoid<C> Monoid<C>::operator*(Monoid<C> & m){
    // Put your code here
}

// Exercise 4 (e)
template <class C>
C Monoid<C>::eval(C (*f)(C,C)){
    // Put your code here
}

// Do not modify
template <class C>
void Monoid<C>::print(void){
    if (m1 == nullptr) cout << constant ;
    else {
        m1->print();
        cout << " * " ;
        m2->print();
    }
}

// Do not modify
template class Monoid<string>;
template class Monoid<unsigned int>;
