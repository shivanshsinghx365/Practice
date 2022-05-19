#include <iostream>
using namespace std;
class hello{
    public:
    int a;
    hello(){                               //constructor overloading
        cout<<"Hello\n";
    }
    hello(int d){
        cout<<"Enter num ";
        cin>>a;
        cout<<"num = "<<a<<endl;
    }
    void display(){                        //function overloading
        cout<<"1st display is empty\n";
    }
    void display(int c){
        cout<<"2nd display is "<<c<<endl;
    }
    void operator ++(){                    //operator overloading
        a=4*5;                             //original a remains unchanged
        cout<<"final = "<<a<<endl;
    }
    void operator ++(int b){
        --a;
        a=a+b;
        cout<<"ending = "<<a<<endl;
    }
};
int main(){
    hello h1;                               //constructors used
    hello h2(7);
    h2.display();                           //functions used
    h1.display(6);
    h1.operator++();                        //operators used
    h2.operator++(7);
}