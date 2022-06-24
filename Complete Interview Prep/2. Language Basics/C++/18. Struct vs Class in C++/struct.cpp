#include <iostream>
using namespace std;

struct point{  //Private by default
    int x;
    int y;
};

int main(){
    point p;
    p.x = 10;
    cout<<p.x<<endl;
    return 0;
}