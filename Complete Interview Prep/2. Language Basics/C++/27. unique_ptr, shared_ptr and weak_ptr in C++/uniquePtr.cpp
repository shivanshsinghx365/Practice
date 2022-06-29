#include <iostream>
#include <memory>
using namespace std;

class test{
    int x;
    public:
    test(int a=0){ x=a; cout<<"Constructor\n";}
    ~test(){cout<<"Destructor\n";}
    void fun(){cout<<x<<endl;}
};

int main(){
    cout<<"main begins\n";
    {
        //unique_ptr<test> ptr = make_unique<test>(10);
        unique_ptr<test> ptr(new test(10));
        ptr->fun();
    }
    cout<<"Main ends\n";
    return 0;
}

/*
OUTPUT : 
main begins
Constructor
10
Destructor
Main ends
*/