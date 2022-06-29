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
    int *ptr1 = new int(10);
    {
        int *ptr2=ptr1;
        SP <int> sp(ptr2);
    }
    cout<<*ptr1;
}