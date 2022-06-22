#include <iostream>
using namespace std;
int main(){
    int *p1;
    double *p2;
    string *p3;

    //Data type of a pointer does not change its size because in the end its just an address
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    //So all 3 will gave same value, and the value will depend on the compiler, in my case its 8

    return 0;
}

/*
OUTPUT :
8
8
8
*/