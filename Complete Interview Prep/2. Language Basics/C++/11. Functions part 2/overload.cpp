#include <iostream>
using namespace std;

void print(int i){
    cout<<"Number : "<<i<<endl;
}
int print(int i, int j){
    cout<<"Two Numbers : "<<i<<"    "<<j<<endl;
    return 0;
}
void print(){
    cout<<"Hello World!"<<endl;
}
void print(string s){
    cout<<"String : "<<s<<endl;
}

int main(){

    print(7);
    print(1,2);
    print();
    print("Gfg"); //Compiler decides which definition ot called based on the input passed

    return 0;
}

/*
Output:
Number : 7
Two Numbers : 1    2
Hello World!
String : Gfg
*/