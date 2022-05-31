#include <iostream>
using namespace std;

#define add(x,y) x+y

int functionAdd(int x,int y){
    return x+y;
}

inline int inlineAdd(int x,int y) { return x+y; }

int main(){

    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;

    int c;
    c=4*add(a,b); // output = 60
    //this will give you 60 and not 120, since x+y is not calculated, its just replaced giving result 4*10+20=40+20=60
    cout<<"add = "<<c<<endl;

    //int c; this will give error since you can't redeclare a variable
    int d;
    d=4*functionAdd(a,b); //ouput =120
    // since 4*(10+20)=4*30=120
    cout<<"functionAdd = "<<d<<endl;

    int e;
    e=4*inlineAdd(a,b);  //ouput =120
    cout<<"inlineAdd = "<<e<<endl;

}   