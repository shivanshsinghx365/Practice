#include <iostream>
#include <memory>
using namespace std;

class test{
    int x;
    public:
    test(int a=0){x=a; cout<<"Constructor called\n";}
    ~test(){cout<<"Destructor called\n";}
    void fun(){cout<<x<<endl;}
};

int main(){
    shared_ptr<test> p1;
    {
        shared_ptr<test> p2 = make_shared<test>(10);
        p1=p2; //without thi like ouput = constructor called, destructor called, main ends
    }// destructor is not called here bcz even though scope of p2 ends, p1 is still in scope, so we call destructor when all pointers end their scopes
    cout<<"Main ends\n";
    return 0;
}

/*
OUTPUT : 
Constructor called
Main ends
Destructor called
*/