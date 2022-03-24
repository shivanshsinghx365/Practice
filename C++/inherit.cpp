#include <iostream>
using namespace std;
class parent{
    public:
    int id_p;
};
class child : public parent{
    public:
    int id_c;
};
int main(){
    child obj;
    obj.id_c=7;
    obj.id_p=91;
    cout<<"id child = "<<obj.id_c<<endl;
    cout<<"id parent = "<<obj.id_p<<endl;
}