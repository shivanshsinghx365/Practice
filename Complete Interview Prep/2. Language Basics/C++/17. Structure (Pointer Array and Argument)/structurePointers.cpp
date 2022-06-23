#include <iostream>

using namespace std;

struct point{
    int x;
    int y;
};

int main(){
    point p = {10,20};
    point *ptr = &p;   // this is declared in same way as normal pointers using * & datatype
    // and in data type we specify the structure name
    // in c you also need to use struct keyword as well
    cout<<ptr->x<<" ";  //Arrow operator s used to access structure elements using pointer
    //in normal variables a dereferencing operator was used as *ptr
    //and while accessing member using p we use '.' operator
    cout<<ptr->y<<" ";
    ptr->x = 999;
    cout<<p.x<<endl;
    return 0;
}

/*

*/