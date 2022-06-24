#include <iostream>
using namespace std;

class point{  //Private by default
    public:
    int x;
    int y;
};

int main(){
    point p;
    p.x = 10;
    cout<<p.x<<endl;
    return 0;
}