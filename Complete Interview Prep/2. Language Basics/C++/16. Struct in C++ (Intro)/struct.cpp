#include <iostream>
using namespace std;

struct point{
    int x; //these are stored in memory in the order they are written, so x is stored first and y is stored next
    int y;
};         //semicolon at the emd
//}p;    this would have created an alias for struct point in the beginning itself
// so now we can directly use p in the program

int main(){
    struct point p; //unlike class you write struct struct_name obj_name;
    // but in c++ it is optional
    // we cn just write `point p` in c++, but in c its compulsory to write c as well
    p.x = 10;   // . operator is used to access the data members
    p.y = 20; // if we skip something we will get some random number
    cout<<p.x<<"  "<<p.y<<endl;
    return 0;
}