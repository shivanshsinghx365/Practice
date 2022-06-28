### **User Defined Exceptions in C++**
---

In c++ we can throw an exception of primitive data type but we can also throw exception of user defined data type.

As a general rule it is suggested to use user defined or non-primitive data types for exceptions. In java primitive types are not even allowed to be thrown as exceptions. In c++ it is allowed but it is still better to use non-primitive

**Exception Class in C++  :**
All standard library exceptions like bad_alloc, bad_cast, etc inherit from exception class directly or indirectly.
We too can make our exception classes inherit from this exception class, this is a recommended practice too.