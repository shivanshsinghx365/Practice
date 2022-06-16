#include <iostream>
using namespace std;
int main(){
    string s1="abc";
    string s2="bcd";
    //Following statements function just like strcmp & check arrays lexicographically
    if (s1==s2){
        cout<<"Same"<<endl;
    }
    else if(s1<s2){
        cout<<"Smaller"<<endl;
    }
    else{
        cout<<"Greater"<<endl;
    }
}