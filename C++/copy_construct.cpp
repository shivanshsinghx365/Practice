/* WAP to create a DB of following details 
name of student(string), roll no(int), height (int), weight(int)
1. create class to initialise value
2. Disp() to display details
3. Illustrate the use of copy constructors
4. Implement destructors */

#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float height;
    int weight;
    Student(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no : ";
        cin>>roll;
        cout<<"Enter height : ";
        cin>>height;
        cout<<"Enter weight : ";
        cin>>weight;
    }
    void Display(){
        cout<<endl<<"name is = "<<name<<endl;
        cout<<"roll is = "<<roll<<endl;
        cout<<"height is = "<<height<<endl;
        cout<<"weight is = "<<weight<<endl;
    }
    ~Student(){
        cout<<endl<<" Ends "<<endl;
    }
};
int main(){
    Student s1;
    s1.Display();
}