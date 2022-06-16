#include <iostream>
#include <string.h> // Module required for these string functions is <string.h>
using namespace std;
int main(){
    char s1[] = "abc";
    char s2[] = "bcd";
    int res = strcmp(s1,s2);
    if (res>0){
        cout<<"Greater\n";
    }
    else if (res==0){
        cout<<"Same\n";
    }
    else{
        cout<<"Smaller\n";
    }
}