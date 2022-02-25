/*
Define a class to represent a bank account. Include the following members:

Data members:
1) Name of the depositor
2) Account number
3) Type of account
4) Balance amount in the account.

Member functions:
1) To assign initial values
2) To deposit an amount
*/
#include <iostream>
using namespace std;

class bank{
    public:
    string name;
    int acnum;
    string type;
    double amount;
    void ent(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter account number : ";
        cin>>acnum;
        cout<<"Enter account type : ";
        cin>>type;
        cout<<"Enter amount : ";
        cin>>amount;
    }
    void add(){
        int x;
        cout<<"How much money to deposit : ";
        cin>>x;
        amount+=x;
        cout<<"New amount = "<<amount<<endl;
    }
};
int main(){
    bank one;
    one.ent();
    one.add();
}