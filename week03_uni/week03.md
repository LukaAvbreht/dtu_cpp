# Week 3 Data types in C++

## Atomic/fundamental types

* bool
* char
* (unsigned) (long) int
* float, double, long double
* enum (defining your own)

New data types

* struct (a combination of two data types)
* array (sequence of data values of hte same type)
* pointers (stores a memory address)

mixed data types and casting

9/6 != 9.0/6

cast with float(int) will make float

Enums:

typedef enum {wood,stone} material;

typedef enum {monday,tuesday,wednesday,thursday,friday,saturday,sunday} days;

typedef struct {
    int x,y;
    bool isWall;
    material type;
} field;


remarks

* enum is just a syntactic sugar
    * finite set of values
* struct is one of the core components
* arrays are also universal
    * they dont keep track of array size, it is your responsibility to do so
    * passing arrays into functions may be difficult
    * the size is fixed


## Pointers

A pointer is a variable that contains a memory address
Access to, manipulation of pointers by a programm allows some interesting applications

* &: address of the operator (takes the variable and returns the corresponding address)
* *: value pointed on, returns the variable of the pointee, the pointer points to


Stack (sequence of addresses in memory)
Heap ()

Only use arrays on Stack (static allocation) if you know their size at compile time, otherwice create one on Heap!!!
Note that creating array on heap, clean the heap after using it!!