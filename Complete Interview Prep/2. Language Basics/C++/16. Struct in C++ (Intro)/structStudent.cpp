#include <iostream>

using namespace std;

struct student{
    int rollNo;
    string name;
    string address;
}ss;

int main(){
    student s = {1,"Shiv","World"};  // this is also one way to input into structs
    cout<<s.rollNo<<" "<<s.name<<" "<<s.address<<endl;
    return 0;
}