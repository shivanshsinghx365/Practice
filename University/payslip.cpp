/*
Write a C++ program to define a class employee having members 
Emp-id, Emp-name, basic salary and functions accept() and display(). 
Calculate DA=25% of basic salary, HRA=800, I-tax=15% of basic salary. 
Display the payslip using appropriate output format.
*/

#include <iostream>
using namespace std;
class employee{
    public:
    int Eid;
    string Ename;
    double base;
    double total;
    void accept(){
        cout<<"Enter id : ";
        cin>>Eid;
        cout<<"Enter name : ";
        cin>>Ename;
        cout<<"Enter salary : ";
        cin>>base;
    }
    void display(){
        total = 800+base +(base/4)-(0.15*base);
        cout<<"DA : "<<base/4<<endl;
        cout<<"HRA :"<<800<<endl;
        cout<<"I-Tax :"<<0.15*base<<endl;
        cout<<"Salary : "<<total<<endl;
    }
};
int main(){
    employee one;
    one.accept();
    cout<<endl<<"-----------------------"<<endl;
    one.display();
    cout<<endl;
}