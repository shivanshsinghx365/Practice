### **Exception Handling in C++**
---

An exception is an unusual/abnormal condition that might happen when a program is running. This might result in unwanted behavior like, program crash, incorrect output, etc.

We could have just exited the function in case of an exception, but that is not a good idea, since it might close the whole program in an inconsistent state. Therefore in situations like these, we would wan to deal with these condition better, therefore exception handling comes in handy

**Examples of exceptions :**
- Division by Zero
- No heap memory available
- Accessing array element outside the allowed index range
- pop from an empty stack
- pushing in a stack which is full