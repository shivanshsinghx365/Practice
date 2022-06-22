### Applications
---

1. Changing passed parameters (like references, so to modify local variables of one function in other function we need either pointers or references, otherwise we will just create copies and no change will be made globally)
2. Passing Large Objects (avoids copying, here references are better choice due to cleaner code)
3. Dynamic Memory Allocation
4. Implementation of Data Structures like Linked List, Tree, BST, etc. (here addresses must be stored for a node to refer to the next node so we use pointers, we can't use reference here as references in C++ are limited and can not be changed from one variable to another, but in Java & Python references can do that)
5. To do System Level Programming
6. To return multiple values (bcz you can only return one, or print multiple, but with pointers we can remove that limitation, we could have used references or structure to do this too)
7. Accessing Array elements (used internally)



**NOTE :** C Language does not have references therefore all these scenarios must be implemented using pointers
In C++ references are present and are recommended over pointers due to safety & ease of use