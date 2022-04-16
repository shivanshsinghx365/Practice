#include <iostream>
using namespace std;
class hello{
    public:
    int art;
    void operator ++(){  //Unary function overloading with void and nothing in parameter
        cout<<"increment\n";
    }
    hello operator +(hello b){ //binary overloading with class type,class object and class answer
        hello c;
        c.art=art+b.art;
        cout<<"add\n";
        return c;
    }
    void display(){
        cout<<art<<endl;
    }
};
int main(){
    hello one,two,addo;
    one.art=7;
    two.art=1;
    addo=one+two;
    ++one;
    addo.display();
}