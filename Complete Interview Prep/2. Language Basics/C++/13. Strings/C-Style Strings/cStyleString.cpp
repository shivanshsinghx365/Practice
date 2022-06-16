#include <iostream>

using namespace std;

int main(){

    char str[]="gfg"; //When we use double quotes like this the compiler puts these in form of an array
    // [g,f,g,\0] , so a string in c-style is terminated by a backslash 0 automatically if you don't do it explicitly
    //functions like strlen in c use \0 to check for string length
    cout<<str<<endl;
    char str1[6]="GfG";//If we give the size more than we used
    //the array created is [G,f,G,\0,\0,\0] with 2 more cells with backslash 0
    //The same thing(\0) happens even when we create an integer array
    //since c-style functions use \0 as a reference it doesn't matter how many you have in the end, your output will remain same
    cout<<sizeof(str)<<endl;  //4 since it is size of gfg + \0, since sizeof gives size of array not string
    cout<<sizeof(str1)<<endl; //6 since it is size of entire array with all \0 included

    return 0;
    
}