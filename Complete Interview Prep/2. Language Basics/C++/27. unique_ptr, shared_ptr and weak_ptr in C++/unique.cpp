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
    unique_ptr<test> ptr1 = make_unique<test> (10);
    //unique_ptr<test> ptr2 = ptr1;  //not allowed
    unique_ptr<test> ptr2 =move(ptr1); //ownership of object is transferred from ptr1 to ptr2
    return 0;
}