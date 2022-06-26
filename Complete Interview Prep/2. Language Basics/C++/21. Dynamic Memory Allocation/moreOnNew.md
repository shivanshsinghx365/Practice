### **More on new**
1. It is an operator not a function
2. It returns the pointer to the memory allocated, thats why we allocated it as `int *ptr = new int;`
3. Always used for dynamic memory allocation
4. Calls constructors for objects of class/struct type
5. Can initialize values also (example this allocates memory and value 5 too,  `int *ptr = new int(5);`)

**Note :** void* is a special pointer type, which does not specify what type of pointer it is, it is used to type cast the pointer when we do not know the type of the memory in advance, and is the only typ available in c for dynamic memory allocation. It is also used to implement generics in c++.