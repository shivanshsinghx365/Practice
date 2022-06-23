#include <iostream>
using namespace std;

struct student{
    int rollNo;
    string name;
    string address;
    int age;
    string section;
};

//This is more optimized because we used a reference
//We could have also passed a pointer to do the same
void print(const student &s){   //& is for creating reference, const is to prevent accidental change and is optional depending on what we want to achieve
    cout<<s.rollNo<<" "<<s.name<<" "<<s.address<<" "<<s.age<<" "<<s.section<<endl;
}

void printPointer(student *s){ //we didn't write const so here we can change the values derived from the original if we choose to
    cout<<s->rollNo<<" "<<s->name<<" "<<s->address<<" "<<s->age<<" "<<s->section<<endl;
}

int main(){
    student sw = {7,"john","12p, rx3080, delhi",20,"Z"};
    print(sw);
    printPointer(&sw);
    return 0;
}