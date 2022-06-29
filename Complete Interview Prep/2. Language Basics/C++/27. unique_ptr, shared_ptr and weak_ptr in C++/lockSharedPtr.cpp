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
    weak_ptr <test> p1;
    shared_ptr<test> p2= make_shared<test>(10);
    p1=p2;
    shared_ptr<test> p3 =lock(p1); //locks weak pointer to convert it to shared pointer
}