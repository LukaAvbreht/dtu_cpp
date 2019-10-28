# Week 7 Object orientated programming




```cpp
// C++ code block
 .h file for frac

 // library includes

 class fraction{

 private:
    // Internal representations of a fractions
    int numerator;
    int denumerator;

 public:
    fraction (int n, int m); // constuct n/m
    fraction (int n); // constructs n/1

    // other methods that you implement in fraction class

 }
```





## Parametric version of class

How to make parametric version of class

Using templates

1. Specify that class is a paramteric class
```cpp

// Represents the type of elemts you want to store in your vector implementation
template <class T>

class myVectorWithTemplates {
private:
    T * content

    int size;
    int capacity;

    void resize();

public:
    // Construction
    myVectorWithTemplates();
    myVectorWithTemplates(int initialCapacity);

    // Destruction
    ~myVectorWithTemplates();


}



```