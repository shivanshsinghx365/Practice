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