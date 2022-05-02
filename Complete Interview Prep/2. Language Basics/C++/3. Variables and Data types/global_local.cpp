//To see local and global variables in action
//Variables defined outside the program are global
//Variables defined in a particular scope are local

#include <iostream>
using namespace std;
int x;  //Global Variable
//Global variables do have default values intialized automatically even in C++
//int default 0, char is default /0 and float is 0.0
//Seems o be compiler independent from my testing
int main(){
    int x=10; //Local Variable
    cout<<x<<" "; 
    //By default value for the variable that is in scope; or is closest is printed; here its 10 & not 0
    {//These curly brackets are used to defined a new scope in the program which makes it containerized
        cout<<x<<" "; //10 in closest bigger scope
        int x = 20;
        //int x= 30;
        //NOTE : above statement will give compiler error, 
        //because variable with same name can not be created in same scope
        //& can ONLY be created in DIFFRENT SCOPES, 
        cout<<x<<" "; //20 is in current scope
    }
    /*extern int x;
    cout<<x<<endl;*/ 
    //will still give error due to same name in same scope
    {
        extern int x; //extern can be used in another scope to use global values by changing x itself
        //that's why it doesn't work in main scope with local variable since it creates a new x itself
        cout<<x<<" ";  //defaulted to 0, since value was not initialized outside; in global scope
    }
    cout<<::x<<endl; //scope resolution operator, automatically takes global value and doesn't change current x
    //hence can be used in same scope as local
}