//MST Practical
//To define function outside the classes

#include <iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    int salary;
    void getdata();
};

void employee::getdata(){
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter salary: ";
    cin>>salary;
}

int main(){
    employee e1;
    e1.getdata();
    cout<<"\nId: "<<e1.id;
    cout<<"\nName: "<<e1.name;
    cout<<"\nSalary: "<<e1.salary;
    cout<<endl;
    return 0;
}