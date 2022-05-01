//First c++ program
/*This is a
Multi line comment*/
#include <iostream> 
//statements beginning by "#" are processed by the pre processor before the program gets compiled
//it's used to include the classes & functions which are defined in the header files to the current file
//iostream is the standard input output stream
using namespace std;
//namespace is used to prevent name clashes between functions/classes of same name defined
//in different header files
int main(){ //contains the main exeutable part of the program
//always use int since this function returns 0 if executed correctly,
//some compiler do support void main() but not all so avoid it
    cout<<"Hello World!"<<endl; //cout is for standard output stream and displays text on screen
    //endl is for next line
    // ";" semicolon is used to denote the end of a statement in C++
    return 0; //it is "optional", and is used to tell the system that everything worked correctly   
}