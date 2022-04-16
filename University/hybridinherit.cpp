#include <iostream>
using namespace std;
class car{
    public:
    int tyres=4;
};
class petrol:public virtual car{
    public:
    string speed="high";
};
class electric:public virtual car{
    public:
    string economy="good";
};
class hybrid:public petrol,electric{
    public:
    string is_it_good="very good";
    void details(){
        cout<<"it has "<<tyres<<" tyres\n"; 
        // gives ambiguity for tyres if petrol & electric is normally derived
        //use "virtual" for base class of petrol and electric to solve it
        cout<<"it has "<<economy<<" economy\n";
        cout<<"it has "<<speed<<" speed\n";
        cout<<"it is "<<is_it_good<<endl;
    }
};
int main(){
    hybrid car1;
    car1.details();
}