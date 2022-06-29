### **unique_ptr, shared_ptr and weak_ptr in C++**
---

All of these 3 are Library implementations of C++ Smart pointers

all these are part of memory header file.

Unique ptr is unique and only on points to the object, so you can not assign a unique pointer to the other. So unique pointer does not support copy constructor and assignment operator. It causes very less overhead bcz it just allocates memory and de-allocates it when scope ends, thats it, no additional feature.
In unique pointes we can pass ownership from one ptr to other using move()

Shared ptr allows multiple shared pointers to refer to the same location, and that is implemented by maintaining extra overhead like keeping reference count to that particular location. they have co-ownership concept

Weak pointers are used for shared pointer objects to create a temporary pointer to it and not increase reference count. we use weak pointers in such cases. weak pointers don't have function like make_weak(), bcz they don't own any object and are bound to existing objects. also used to deal with cyclic dependencies of some shared pointers, since in cases like these reference count is >= 2 ans we can't delete these, this is resolved using weak pointer with one of them.