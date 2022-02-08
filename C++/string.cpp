#include <iostream>
using namespace std;
int main(){  //can't be void but only main
    string phrase = "Giraffe Academy"; //datatype must be defined in c++
    cout<<"Giraffe\n"; // \n comes inside the string and is same as endl outside the string
    cout <<"Giraffe"<<endl;
    char ch;
    ch='A';
    ch='Z'; //Character can be changed as well
    cout<<ch<<endl;
    //Individual characters of strings can be modified
    phrase[0]='B'; //Needs single Quotes '' because it is a individual character
    cout<<phrase<<endl;

    //c++ strings have predefined functions used as string.function()
    cout<<phrase.length()<<endl; //Length
    cout<<phrase.substr(8,3)<<endl; // takes part of the whole string, (first index, length)
    //Both index are optional, if you dont write end it will print till last, if you don't
    //write both then it will print the whole string
    //if you give too long length no error will come, and element till last will be pinted
    //even for negative length till end will be printed
    //it can also be stored in another variable
    string substring = phrase.substr(6,4);
    cout<<substring<<endl;

    cout<<phrase.find('a',0)<<endl;   //Find a character or substring (string, starting index)
    //In case the string is absent we get garbage value
    //These strings are case sensitive
    //First occurrence location is printed


    cout<<phrase[0]<<endl;  //Positive indexing works perfectly in c++
    cout<<phrase[-2]<<endl; //Negative indexing doesn't work in c++, we don't get output or error
    cout<<phrase[50]<<endl;  //if string index is out of range we do not get an error
    return 0; // optional; can be avoided
}