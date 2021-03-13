
# Week 1: Classes

## Classes in C++
- can create user-defined types
- can associate data and related functionality into a single object

### Encapsulation:
- encloses data and functionality into a single unit (the class)
- can be thought of as data + functionality
- we have private and public data/functionality
- e.g. cube class;
    - private member variables should be typed: "length_"
    - functionality: getVolume()
- public:
    - data/functionality can be accessed by any part of the code
- private:
    - data/functionality can only be accessed by the class itself

### example code; cube class
- see code dir

## C++ Standard Libary

### ```iostream```
- lets us use things like `cout` and `endl`

# Week 2: Memory
- In C++, the programmer has control ove the memory and lifecycle of every variable we create
- The variable lives in stack memory by default
- Every **variable** has:
  - A name
  - A type
  - A value
  - A location in memory (memory address)
```int primeNumber = 7;```
- Get the variables memory address by using `&` operator
```c++
    int val = 5;
    // print memory address of variable
    cout << &val << endl;
```