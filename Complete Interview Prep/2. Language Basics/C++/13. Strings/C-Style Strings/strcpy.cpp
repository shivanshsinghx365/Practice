#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str[5];//="ZEE";
    /*str="GfG"; */
    //This ine gives error since the name str gives the address of the string and we are trying to place a value in it
    //we can write char str[]="gfg", string str="fgf" but not str[]; and str="gfg"
    //This is where strcpy comes into play
    //so if we want to place value of another string which is terminated by \0 to current string we use strcpy
    strcpy(str,"gfg"); //We could have passes a variable A, which had value "gfg" as well instead
    cout<<str<<endl;

    //SO, WE USE STRCPY TO ASSIGN STRINGS TO AN UNINITIALIZED CHARACTER ARRAY
    //It can also be used if the original string is not empty
    return 0;
}