#include <iostream>
using namespace std;
class car{
    private:
    string name;
    int number;
    public:
    void geter(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter number : ";
        cin>>number;
    }
    void setter();
};
void car::setter(){
    cout<<"Name is = "<<name<<endl;
    cout<<"Number is = "<<number<<endl;
} 
int main(){
    car mars;
    mars.geter();
    mars.setter();
}