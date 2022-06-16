**Random note**
*1. Pointer in C++ is a variable that stores the address of another variable, or in other words they point to a memory location where a particular variable/object is stored*
*2. Data type is a parameter that tells us what type of data a particular variable is going to hold*

#### 2 ways to write String in C++ :
1. C-style String: a.k.a array of characters
2. C++-Style String: using an object of string class

C style strings can be written by
- writing them inside "" double quotes which will automatically be terminated by \0
- writing them as an array of characters in single quotes '' inside curly braces but we must also put \0 as a character for safety and proper function

C-Style string functions :
- strlen(str)      // find length of string and stops when it finds a \0
- strcmp(s1,s2)    // compares two strings lexicographically and returns zero if both are same, positive if 1st string is greater, and returns negative if 1st string is lexicographically smaller
- strcpy(s1,s2)    // 