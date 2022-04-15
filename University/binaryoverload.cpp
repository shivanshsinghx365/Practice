#include  <iostream>
using namespace std;
class complex{
    public:
    int real, img;
    void enter(){
        cout<<"Enter real ";
        cin>>real;
        cout<<"Enter Virtual ";
        cin>>img;
    }
    complex operator +(complex num){
        complex a;
        a.real=real+num.real; // initial real is for object "one", since that is the object through which
        // the operator + is being called (ie: one is this object or current object though which + is called)
        a.img=img+num.img;
//      cout<<a.real<<" + "<<a.img<<" i "<<endl;
        return a;
    }
    complex operator - (complex num){
        complex b;
        b.real=real-num.real;
        b.img=img-num.img;
        return b;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    complex one,two,sum,diff;
    one.enter();
    two.enter();
    sum=one+two;   //this is equivalent to one.operator+(two)
    sum.display();
    diff=two-one;
    diff.display();
}