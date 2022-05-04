//To see size of various data types in a C++ compiler
//NOTE: Size can differ from compiler to compiler due to lack of strict restrictions in default standards

#include <iostream>
using namespace std;
int main(){
    cout<<sizeof(char)<<" "; //size can be taken by datatype name
    //Sizeof can be used without brackets like "sizeof char" aswell
    //char is 1 byte
    char c;
    cout<<sizeof(c)<<" ";//size can be taken by variable name
    cout<<sizeof(int)<<" ";
    //int is 4 byte
    cout<<__SIZEOF_INT__<<" \n";//size can be taken by default macros
    //doesn't exist for everything and everywhere, might exist for int,long ,double,short, etc only
    return 0;
}