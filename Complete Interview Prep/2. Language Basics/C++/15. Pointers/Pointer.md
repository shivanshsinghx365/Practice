### Pointers
---
Pointers are variables that store address of some variable/object (objects are just variables of user defined classes)
& when used before a variable name(while not declaring it as reference) gives the address of the variable
Every variable in a program has three things a name, a value and an address
*when used before an address(or address variable, i.e. , pointer) gives the value of the address, in other words it is a dereferencing operator

& operator **when used in declaration** as int &x, and int &fun() **is a reference**
& operator **when used to give value** as return &x and *y=&x it **gives address**

*operator **when used in declaration** it **creates a pointer**
*operator **when used with an already declared pointer** it gives the **value because its dereferencing**

pointers have a data type which tell us what is the data type of the variable whose address is being stored (note data types can be user defined classes as well), This is necessary so that when dereferencing your compiler knows what is to be dereferenced
example: string*s stores address of a string, int *ptr stores address of an integer and so on

Data type of a pointer does not change its size because in the end its just an address

Pointers can be used to control/change/modify other variables via dereferencing

Its not a good idea to dereference an uninitialized pointer, since that may create a segmentation fault

Note: pointer is not dereferencing operator, *operator is dereferencing operator as it takes away the reference and gives you the exact value of the variable that was being pointed

referencing is direct, dereferencing is indirect and occurs via the memory address

Extra Random Info : pointer can point to itself as follows : void *a = &a

A void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any type and can be typecasted to any type.