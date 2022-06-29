#include <iostream>
using namespace std;

class sp{
    int *ptr;      // Wraps an integer pointer
    public:
    sp(int *p=NULL){ptr=p;}
    ~sp(){delete ptr;}
    int &operator *(){return *ptr;}
};

int main(){
    sp smart(new int());
    *smart = 20;
    cout<<*smart;
    return 0;
}

/*
OUTPUT :
20
*/