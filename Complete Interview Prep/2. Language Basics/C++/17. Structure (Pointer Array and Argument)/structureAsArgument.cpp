#include <iostream>
using namespace std;

struct point{
    int x;
    int y;
};

void print(point p){     // we are passing a copy just as we do normally in passing by value
//so if you change p inside this function they wont change the original p
    cout<<p.x<<" "<<p.y<<endl;
}

int main(){
    point p1 = {100,200};
    print(p1);
    return 0;
}