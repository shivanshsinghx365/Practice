#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter you name : ";
    //cin>>str; 
    //NOTE : cin stops when encounters a space or new line character
    getline(cin,str); 
    cout<<"Your name is "<<str<<endl; 
    //To read strings with spaces we don't use cin, we use getline(cin,str);
    // getline doesn't stop reading until we press the enter key
    //get line has one more optional parameter to specify the character after which to stop getline(cin,str1,'a');
    //will stop after encountering a, so my name becomes Shiv
    return 0;
}