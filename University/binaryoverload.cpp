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
        a.real=real+num.real;
        a.img=img+num.img;
//      cout<<a.real<<" + "<<a.img<<" i "<<endl;
        return a;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    complex one,two,sum;
    one.enter();
    two.enter();
    sum=one+two;
    sum.display();
}