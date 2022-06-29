#include <iostream>
using namespace std;

template <class T>
class SP{
    T *ptr;
    public:
    SP(T *p=NULL) {ptr=p;}
    ~SP(){delete ptr;}
    T &operator *(){return *ptr;}
    T *operator ->(){return ptr;}
};

int main(){
    SP <int> sp(new int());
    *sp = 20;
    cout<<*sp<<endl;
    return 0;
}

/*
OUTPUT :
20
*/