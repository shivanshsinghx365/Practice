//Find if a number is armstrong or not
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a number: ");
    scanf("%d",&a);
    c=a;
    d=0;
    while (a>0){
        b=a%10;
        a=a/10;
        d=d+(b*b*b);
    }
    if (d==c){
        printf("Number is Armstrong\n");
    }
    else{
        printf("Not armstrong\n");
    }
    return 0;
}