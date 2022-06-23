#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(){
    struct point p = {.y=120, .x= 100}; //this method is known as designated Initialization
    //does not seem to be working in c++

    // using this method we can declare in changed orders, In fact we can skip initialization
    //thse will get default values, for int it will be 0
    
    printf("%d  %d\n",p.x,p.y);

    //if we dont initialize any of the two values we get random values
    return 0;
}