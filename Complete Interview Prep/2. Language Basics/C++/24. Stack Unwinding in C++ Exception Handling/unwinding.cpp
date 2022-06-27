#include <iostream>
using namespace std;

void f1(){
    cout<< "f1 begins \n";
    throw 100;
    cout<<"f1 ends\n";
}

void f2(){
    cout<< "f2 begins \n";
    f1();
    cout<<"f2 ends\n";
}

void f3(){
    cout<<"f3 begins\n";
    try{
        f2();
    }
    catch(int i){
        cout <<"Caught Exception \n";
    }
    cout<<"f3 ends \n";
}

int main(){
    f3();
    cout<<"Bye...\n";
    return 0;
}

/*
OUTPUT : 
f3 begins
f2 begins 
f1 begins 
Caught Exception 
f3 ends 
Bye...
*/