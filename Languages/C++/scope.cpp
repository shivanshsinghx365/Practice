//Exp 2.3
//WAP to illustrate the scope of resolution operator.
//Display the various values of the same variable.
#include <iostream>
using namespace std;
int our_variable=1; //Global Variable
class my_class{
    public:
    int my_variable=10;
    void display();  //Prototype of display function
};
void my_class::display(){   //Defining using Scope Reservation Operator
    cout<<"Hello, number is "<<my_variable<<endl;
}
int main(){
    my_class eleven;
    cout<<endl;
    eleven.display();
    cout<<endl;
    int our_variable=100; //Local variable
    cout<<"Global variable = "<<::our_variable<<endl;
    cout<<"Local variable = "<<our_variable<<endl;
}