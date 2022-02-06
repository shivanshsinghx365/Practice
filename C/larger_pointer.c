//Experiment 8.2
//write a function code that is returning pointer to the larger value out of two passed values.

#include <stdio.h>
void func(int a,int b){
    if (a>b){
        printf("A is greater, at address = %p\n",&a);
    }
    else if (a<b){
        printf("B is greater, at address = %p\n",&b);
    }
    else{
        printf("Both are equal at a=%p & b=%p\n",&a,&b);
    }
}
void main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    func(a,b);
}