#include<stdio.h>
void main()
{
    float i,n;
    float x,sum=1,term=1;
    printf("Enter x: ");
    scanf("%f",&x);
    printf("Enter n: ");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        term=(term*x)/i;
        sum+=term;
    }
    printf("Sum= %d\n",sum);
}