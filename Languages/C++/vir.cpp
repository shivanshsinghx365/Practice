#include<iostream>
using namespace std;
class base
{
    public:
    int bs;
    void show(){
        cout<<"Base:"<<bs<<endl;
    }
};
class derive : public base{
    public:
    int dr;
    void show(){
      cout<<"Derive:"<<dr<<endl;   
    }
};
int main(){
    base* base_pointer;
    derive* derive_pointer;
    base b_obj;
    derive d_obj;
    base_pointer=&b_obj;
    derive_pointer=&d_obj;
    base_pointer->bs=2;
    derive_pointer->dr=6;
    base_pointer->show();
    derive_pointer->show();
}