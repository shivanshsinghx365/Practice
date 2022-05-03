//Linker Error
//Functions which are called do not have definition 
//(this occurs if no definition is found in current file,standard path & also in explicit paths provided)
#include <iostream>
using namespace std;
//void fun(){};
//This upper one wouldn't have given any error since it has a definition even if it is empty
void fun();//This one gives error since there is no definition, just a declaration/prototyping
int main(){
    fun();
    //undefined reference to `fun()'
    //ld returned 1 exit status
    //Errors having ld are related to linker errors
    return 0;
}