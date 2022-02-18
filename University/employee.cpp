//Exp 2.2
//Create a class called employee with following details in it
//1.Name(string) 2.Age(int) 3.Designation(string) 4.Salary(double)
#include <iostream>
using namespace std;
class employee{
    public:
    string name;
    int age;
    string designation;
    double salary;
    void enter(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter designation : ";
        cin>>designation;
        cout<<"Enter salary : ";
        cin>>salary;
    }
    void show(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Designation :"<<designation<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
int main(){
    employee one;
    one.enter();
    cout<<endl<<"-----------------------"<<endl;
    one.show();
    cout<<endl;
}