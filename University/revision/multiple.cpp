#include <iostream>
using namespace std;
class father{
    public:
    father(){
        cout<<"Father\n";
    }
    string str = "Blue";
    int eye = 2;
    int why=7;
    int whynot=10;
};
class mother{
    public:
    mother(){
        cout<<"Mother\n";
    }
    string emotion = "Happy";
    int nose=1;
    int why=8;
    int whynot=11;
};
class child:public father, public mother{
    public:
    child(){
        cout<<"Child\n";
    }
    int finger=10;
    int why=9;
};
int main(){
    child c1; 
    //constructors gets called in sequence like first was father, then mother and finally the actual child
    cout<<c1.finger<<" ";
    //both have to be public public father,mother will inherit mother as public
    cout<<c1.emotion<<" ";
    cout<<c1.eye<<" ";
    cout<<c1.str<<" ";
    cout<<c1.nose<<" ";
    cout<<c1.why<<" ";// takes value from child
    //cout<<c1.whynot;
    //whynot is ambiguous since it exists in both parents but not in child
    cout<<endl;
    return 0;
}