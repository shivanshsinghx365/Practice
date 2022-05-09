#include <iostream>
using namespace std;
class parent{
    private:
    int x=7;
    public:
    void show(){
        cout<<x<<endl;
    }
    protected: //can be inherited directly but can not be accessed directly
    void show2x(){
        cout<<2*x<<endl;
    }
};
class base1:public parent{
    public:
    void show3(){
        //cout<<3*x<<endl; //will not work bcz x was private in parent -> no x in base1
        cout<<3<<endl;
    }
    void show4(){
        show2x();
    }
};
int main(){
    base1 obj;
    obj.show(); //publicly inherited from parent-> 7
    obj.show3(); //normal func of class-> 3
    obj.show4(); //normal func of class-> 14
    //obj.show2x(); //won't work in obj only works within immediately derived class
    return 0;
}