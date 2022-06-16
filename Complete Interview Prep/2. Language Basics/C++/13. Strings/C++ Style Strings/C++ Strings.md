### C++ Style Strings
- Richer library
- Supports operators like +,<,>,==,<=,>= (so we don't need to use functions like strcmp to compare strings & strcat to append one string to another)
- Can assign a string later (initialize an empty string like string str; str="gfg"; whereas in c-style we had to use strcpy to do the same)
- Do not have to worry about size (similar to vectors in c++ unlike arrays of c)
- Can be converted into C-Style if needed by using a function c_str() 
- Recommended to be used over C-Style 
- Easier to use

**NOTE :** String is a class in C++, therefore we use '.' operator while calling its functions, No special header file is required in this case.