### **DMA**
---
#### **How Variables are stored in Memory :**

[Stack] : Stores function call activation records including that of main(), main is actually the first to get stored, stack stores local variables of these functions, except those with new or delete, bcz these are stored in heap
[Heap] : Stores Dynamically allocated memory (DMA), it has nothing to do with heap data structure, it just means a pool of memory where you can allocate and de-allocate memory
[Data] : This section is there for the data which is there through the lifetime of the program (global & static variables)
[Text] : This section holds the executable code

Note : local variables also known as automatic or auto variables stay only for the life time of the function, and they are de-allocated memory when the function call is over. While static stay through out the life-time of the entire program. DMA gives us the control of when to allocate and de-allocate memory

**Applications of DMA :**
1. Increasing the size of vector when its about to get full, so that more elements can be inserted
2. Implementing data structures like linked list, Binary search Tree

new is used to allocate memory, delete is used to de-allocate memory

we should not make programs where we return values of normal auto variables, since they go out of scope at end of the function call, which may give some garbage value or segmentation fault.

**Memory Leak :**  in dma it becomes the responsibility of the programmer to free the memory. memory leak is a condition where you are allocating some memory but never de-allocating it afterwards