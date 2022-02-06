#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,r1,r2,x;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if (d==0){
        r1=r2=-b/(2*a);
        printf("root1 = root2 = %f\n",r1);
    }
    else if (d>0){
        x=sqrt(d);
        r1=(-b+x)/(2*a);
        r2=(-b-x)/(2*a);
        printf("root1 = %f\n",r1);
        printf("root2 = %f\n",r2);
    }
    else{
        x=sqrt(-d);
        r1=-b/(2*a);
        r2=x/(2*a);
        printf("root1 = %f + %fi\n",r1,r2);
        printf("root2 = %f - %fi\n",r1,r2);
    }
}