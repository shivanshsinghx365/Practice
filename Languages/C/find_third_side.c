#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c;
    printf("Enter 1st side: ");
    scanf("%f",&a);
    printf("Enter 2nd side: ");
    scanf("%f",&b);
    printf("3rd side is: %.2f\n",sqrt(a*a+b*b));
}