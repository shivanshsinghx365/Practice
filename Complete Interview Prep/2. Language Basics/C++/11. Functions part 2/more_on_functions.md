#### Inline Function : 
used for small functions
Function calls cause additional overheads in the program since the state of the program is being saved, the control going to the function and then returning to the main program to resume the execution
thus to deal with such issues inline functions were created, since they do not cause overheads
whenever inline functions are called they are replaced by their definition directly in the main program thus preventing any overhead

inline function is a request to the compiler to make it inline, it is not guaranteed that the compiler will make it inline

functions are not generally made inline because modern compilers automatically make tht decisions

##### Inline vs Macros:
1. uses keyword 'inline' and '#define' respectively
2. can be declared inside/outside class and can't be declared inside class respectively
3. strict parameter type checking and no parameter type checking
4. macros just expand so, 
```cpp
#define add(x,y) x+y
cout<<4*add(10,20);  // this will give you 60 and not 120, since x+y is not calculated, its just replaced giving result 4*10+20=40+20=60
```
functions(including inline functions) on the other hand take care of these things, they are first calculated then replaced
5. macros are not bound by anything, inline start and end with curly braces {}
6. in macros you don't give data type of the parameter you use, you just give them a name
example: add(x,y) not add(int x,int y), this is because macros don't care about datatype

#### Function Overloading : 
It is an example of *compile-time polymorphism* and is an important part of OOPS
In function overloading we use the _same function name for different purposes_, however we must make sure that _input should be different (either in terms of number or type of input)_
and the correct definition is called on the basis of the arguments passed
__Note : Function overloading can differ in their return types, but that doesn't differentiate which definition to use, therefore it is necessary that their inputs are different as well, otherwise you will get error because the 2 functions with same inputs have different definitions leading to ambiguity__

#### Default Arguments : 
this is another polymorphism feature in C++
in this we provide the functions with **some default values which are automatically utilized if the user does not pass those inputs**
Advantages : We don't have to make multiple functions if we know that that function can be called with multiple number of parameters and we know what default values can be utilized in case user doesn't provide one
**NOTE : default arguments can only be placed for the last elements, any argument that does not have a default value must come first, before any parameter with default values**

#### Actual Parameters vs formal parameters
int x, int y are formal parameters
5, 4 are actual parameters
Actual parameters are first evaluated before they are assigned to the function, but the evaluation order is not defined by the standard, it might be from left to right or vice-versa, so different compilers might produce different output