#include <stdio.h>
int main(){
    int n;
    float a,b,c;
    printf("Chose an option\n");
    printf("1. F to C\n");
    printf("2. C to F\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        a=0;
            printf("Enter Temperature in F: ");
            scanf("%f",&c);
            a = (float)((c-32)*5)/9;
            printf(" Temp in C is %.2f\n",a);
            break;
        case 2:
        b=0;
            printf("Enter Temperature in C: ");
            scanf("%f",&c);
            b = ((9*(c))/5)+32;
            printf("Temp in F is %.2f\n",b);
            break;
        default:
            printf("Incorrect input\n");
            break;
    }
}