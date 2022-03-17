#include <iostream>
using namespace std;
class Number{
    public:
    int x;
    Number(){
        cout<<"Today ";
    }
    ~Number(){
        cout<<"Exit ";
    }
};
int main(){
    Number n1;
    cout<<"Hii ";
    {Number n2,n3;}
    cout<<"Bye ";
}

// O/p is    Today   Hii   Today Today  Exit  Exit    Bye   Exit 
// reason->   n1    main    n2    n3    ~n3    ~n2   main   ~n3

/*constructor doesn't have return type
automatically called when object is made
it provides memory in objects
even when you don't create it's automatically called in backend

destructor vacates the memory
has tilda ~ and same name as class
it can never have parameters
works when objects scope end Or when main function ends

construct  and destruct have reverse order like 123 construct and reverse is 321 Destruction*/
