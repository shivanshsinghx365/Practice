#include <iostream>
using namespace std;

union test{
    int x;
    int y;
};

int main(){
    test t;        // we don't write union here in front in c++, but in c you need to write union as well

    t.x = 10;      // members are accessed using dot operator
    cout<<t.x<<"  "<<t.y<<endl;

    t.y = 20;
    cout<<t.x<<"  "<<t.y<<endl;

    cout<<sizeof(t)<<endl;

    return 0;
}

/*
OUTPUT:
10  10
20  20
4
*/