# Week 4 Data types and pointers

a box just contains the address in memory.

pointer -> int \
int* -> int

Dynamic memory allocation
    * the program asks for the memory in heap (maunal editing)
    * create one with new int
    * will get back the pointer to memory block
    * have to delete after usage (clean-up after yourself!!)


```cpp
int *p1, *p2, p3;
char *cptr;
```

& -- Address of the memory address \
\* -- value pointed to


```cpp
int x = 42, y = 420;
int *p1, *p2;
p1 = &x;
p2 = &y;

*p1 = 69; // assigns the value of x to 69
```


## library

To ensure to only define the header file once use macros

The header file (.h) shood look like

```cpp
#ifndef __my__sweeet__library__
#define __my__sweeet__library__

// The header file of the library
// Content of header

#endif
```
