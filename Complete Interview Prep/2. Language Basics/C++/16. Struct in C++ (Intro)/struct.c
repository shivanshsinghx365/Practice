#include <stdio.h>

typedef struct  point
{
    int x;
    int y;
}p;

int main(){
    p p; // first p is an alias for struct point and 2nd one is the name of the structure created
    p.x = 10;
    p.y = 30;
    printf("%d  %d\n",p.x,p.y);
    return 0;
}