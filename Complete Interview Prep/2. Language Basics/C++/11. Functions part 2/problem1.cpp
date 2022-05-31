#include <iostream>
using namespace std;
//void func();  //with this definition/prototype we won't get a error
//also note if func printed the integer passed like func(6), then in definition we could have removed variable name a.k.a x from void func(int x) and just use void func(int), since it is optional in definition, but compulsory in declaration
//however the declaration will still have variable name void func(int x)
int main(){
    func(); //before calling a function we need to make sure there is a definition or declaration before it, otherwise we get compiler error
    return 0;
}
void func(){
    cout<<"Hello";
}

/*
Output:
We get "Compiler error" since function was used before definition/declaration
this error would not have occurred if we would have given the definition or atleast the define a prototype before calling it
*/

//NOTE : If we only define the function and don't declare it, and then use it then we will get an error saying "Undefined reference to func", however if we don't use the function then we won't get any kind of error
//also in this specific case compiler will compile it and the linker is the one that will generate an Linker Error, because linking phase is where the function's code is linked