Structure members are public by default and class members are private by default

If you try to access a private member using '.' operator in the main program, we will get an error

Just like classes Structures can have access specifiers, functions, constructors and destructor (but they don't have all types of constructors/destructors, example they don't have non-parameterized constructor)

Structures and classes differ in inheritance as well
Default behavior for struct is public and that for class is private IF inheritance type is not specified

**When to use a Structure & When to use a Class ?**
1. We can use these 2 interchangeably
2. Struct is used when we have to bundle multiple items together or when we want to make a composite data type and probably also have related functions bundled in the same thing (just used as a data type)
3. When we care about OOPS concept & data hiding we use classes
4. To solve mathematical problems or creating data structures we use struct
5. To solve bigger organizational problems we use classes for OOP (bcz classes emphasize data-hiding by default)