/* WAP to create a DB of following details
name of student(string), roll no(int), height (int), weight(int)
1. create class to initialise value
2. Display() to display details
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
    void Display(){                 // Statement 2
        cout<<endl<<"name is = "<<name<<endl;
        cout<<"roll is = "<<roll<<endl;
        cout<<"height is = "<<height<<endl;
        cout<<"weight is = "<<weight<<endl;
    }
    ~Student(){                 //Statemnt 4
        cout<<endl<<" Ends "<<endl;
    }
};
int main(){
    Student s1;         // Statement 1
    s1.Display();       // Statement 2
}  // Statement 4