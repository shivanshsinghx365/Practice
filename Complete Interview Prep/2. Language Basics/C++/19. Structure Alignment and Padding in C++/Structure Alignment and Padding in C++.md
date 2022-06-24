### **Structure Alignment**
---
size of operator can be used on struct in the same way as primitive data types
data-types including primitive as well, have different alignment requirements in different architectures
structures are aligned according to its largest member (example if we have double and char, they will be filled in boxes of 8 bytes)
NOTE : char don't have alignment requirements, only data type with more than one byte like int,double etc have these requirements
Structures where elements are in increasing or decreasing order of sizes have lower memory requirement than the one where we are writing them randomly, this is all due to alignment

**Reason for Alignment :**
- processors access in form of words and not letters, in other words they read multiple bits and not single bits at a time, 32bit cpu reads 4 bytes at once, & 64 bit uses 8 bytes at once. This is done in order to save CPU cycles
- without alignment we might need more cpu cycle 
example char c1, char c2, double d1;
if aligned : `[1 + 1 + 6]+[8]`  so to read d1 we need just one cycle
if not-aligned `[1+1+6+2]` now to read the 8 byte double you need two cycles

Computer automatically takes care f this alignment and as programs we don't need to do anything extra
In compilers like gcc we can specify if we want the compiler to do compact/packed representation without alignment using __attribute__((packed));