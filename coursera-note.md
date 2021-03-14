
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
- returns the stack memory address
- **Stack memory** is the default memory in C++
- Is associated with the current function and the lifecycle of the memory is equal to the functions runtime
  - I.e. as long as the function runs, the variables are stored in memory until it's no longer running
- Stack memory starts at the top; high memory
  - so the variable that is allocated memory first will have a higher memory address, and so on.

### Pointers:
- a variable that stores the memory address of the data (not the data itself)
- a level of indirection from the data
  - follow the pointer and it leads us to the memory address
- in C++ a pointer is defined by adding `*` to the type of the variable
  ```C++
  int * p = &num;
  ```
- tells us where `num` is stored in memory

### Dereference Operator:
- Given a pointer, get the value
- Useful if we have the pointer, but want to get the value
```c++
  int num = 7; // a variable with value 7
  int *p = &num; // a pointer (p) to num's address in memory
  int value_in_num = *p;
  *p = 42; // change the value of num from 7 to 42
```



