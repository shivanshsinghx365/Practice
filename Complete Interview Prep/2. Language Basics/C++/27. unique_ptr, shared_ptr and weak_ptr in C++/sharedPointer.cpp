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
    //shared_ptr<test> ptr1(new test(10));
    shared_ptr<test> ptr1 = make_shared<test> (10);
    shared_ptr<test> ptr2 = ptr1;
    cout<<ptr1.use_count()<<endl; //his tells how many pointers co-own the variable referenced
    cout<<ptr2.use_count()<<endl;
    return 0;
}

/*
OUTPUT : 
Constructor called
2
2
Destructor called
*/