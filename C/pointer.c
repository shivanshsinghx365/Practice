//Pointers

#include <stdio.h>
void main(){
    int a=10;
    int *c=&a;
    printf("*c = %d\n",*c);
    printf("a = %d\n",a);
    printf("&a = %p\n",&a);
    printf("c = %p\n",c);
    printf("&c = %p\n",&c);
}