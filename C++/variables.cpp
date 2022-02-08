#include <iostream>
using namespace std;
int main(){
    string name = "John";
    float age = 17.60; //Note: Only integer part will be taken if you write a float with type int.
    //Note: Only the number integer will be printed if you write a int with type float
    //So unless the type and number both are float you will get a int with no extra zero, even if you write 0 after decimal they won't be printed
    cout<<"There once was a man named "<<name<<endl;
    cout<<"He was "<<age<<" years old"<<endl;
    name="mike"; //Note: If you used '' instead of "" it will be considered a char instead of string. You will get a warning and only LAST character will be printed
    cout<<"He liked the name "<<name<<endl;
    cout<<"But did not like being "<<age<<endl;
    return 0;
    //Variables: Containers that store data
        //They help us to maintain and keep track of data.
        //They can be modified in the program.
        //Can also be declared once and used multiple times in a program.
}

