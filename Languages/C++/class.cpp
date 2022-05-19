#include <iostream>
using namespace std;
class CSE{
    int var1=10;
    public:         //Access Specifier
    string name;    //Variables
    void display(){ //Member Functions
        cout<<"Var1 = "<<var1<<endl;
        cout<<"name = "<<name<<endl;
    }
};
int main(){
    CSE abc;        //Class_Name Object_name
    abc.name="sth";
    abc.display();
}