#include <iostream>
using namespace std;
int main(){
    string str = "geeksforgeeks";
    cout<<str.length()<<" "; //length 13
    str=str+"xyz";
    cout<<str<<" ";          //geeksforgeeksxyz, used for concatenation
    cout<<str.substr(1,3)<<" "; //beginning index and length are given here therefore we get eek
    cout<<str.find("eek")<<" "<<endl; //used to search a string in a given string
    //gives the index where the substring is found for the first time, here 1
    //if not found we get special constant string::npos
    cout<<string::npos<<endl;
    return 0;
}