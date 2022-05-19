#include <iostream>
using namespace std;
class grandparent{
    public:
    int grand=1;
    grandparent(){
        cout<<"Grand called\n";
    }
};
class parent:public grandparent{
    public:
    //int parent=2; //a field with the same name as its class cannot be declared in a class with a user-declared constructor
    //Can be used if there was no constructor
    int prnt=2;
    parent(){
        cout<<"Parent called\n";
    }
};
class child:public parent{
    public:
    int chld =3;
    child(){
        cout<<"Child Called\n";
    }
};
int main(){
    grandparent gp;
    cout<<gp.grand<<endl;
    parent pp;
    cout<<pp.grand<<" "<<pp.prnt<<endl;
    child cd;
    cout<<cd.grand<<" "<<cd.prnt<<" "<<cd.chld<<endl;
    return 0;
}
//Constructors are called from first base to child to its child aka grand to parent to child