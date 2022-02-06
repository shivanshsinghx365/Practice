#include <stdio.h>
void main(){
    int a=5;
    void *ptr;
    ptr=&a;
    printf("The value = %d\n",*(int*)ptr);
}