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
    {
        shared_ptr<test>p2 = make_shared<test>(10);
        p1=p2;
        cout<<p1.use_count()<<" "<<p2.use_count()<<endl; //both have reference count 1 since weak pointers
    }//object is terminated here itself on exiting the scope
    cout<<"Main ends\n";
    cout<<p1.expired(); //returns true if object is de-allocated or else it gives false
    return 0;
}

/*
OUTPUT : 
Constructor called
1 1
Destructor called
Main ends
1
*/