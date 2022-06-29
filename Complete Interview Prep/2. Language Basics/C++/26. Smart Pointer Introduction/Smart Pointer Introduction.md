### **Smart Pointer Introduction**
---

**Problem with normal pointers :**
- Memory Leak : If we use dma and don't de-allocate it, the compiler doesn't give us any warning and it is up to the programmer to deal with this.

Smart pointer try to solve this problem by wrapping a given pointer into a class object.

Ideally we should not write cout statements within constructors and destructors

Template Smart pointer can be used for  any data type