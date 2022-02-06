/* WAP to give ones, tens, hundreds and thousands digit of a user given 4-digit number */
#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter a 4 digit number: ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10; 
    e=a%10;
    printf("Ones digit is = %d\n",b);  
    printf("Tens digit is = %d\n",c);   
    printf("Hundreds digit is = %d\n",d);  
    printf("Thousands digit is = %d\n",e);
}