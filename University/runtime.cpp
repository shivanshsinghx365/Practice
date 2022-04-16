#include <iostream>
using namespace std;
class instrument{
    public:
    virtual void sound(){
        cout<<"BASE sounds\n";
    }
    void name(){
        cout<<"BASE instrument\n";
    }
};
class flute: public instrument{
    public:
    void sound(){
        cout<<"DERIVED flu flu\n";
    }
    void name(){
        cout<<"DERIVED Flute\n";
    }
};
class piano: public instrument{
    public:
    /*void sound(){
        cout<<"DERIVED pia pia\n";
    }*/
};

int main(){
    flute fl;
    piano pia;
    instrument* ins = &fl;
    // virtual function, binded at runtime 
    ins->sound();  // since fl has its own implementation flu flu is printed
    instrument* inst =&pia;
    inst->sound(); //piano doesn't have its own implementation therefore sounds is printed
    // Non-virtual function, binded at compile time 
    ins->name();
}