/*
WAP to print for a user defined range (take 1 number from user)
****
***
**
*/
#include <stdio.h>
void main()
{
    printf("Enter a number : ");
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        for (int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
}