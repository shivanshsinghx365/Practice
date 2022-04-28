//Quadratic solutions
#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%f",&c);
    float d = (b*b)-(4*a*c);
    float r1,r2;
    if (d==0){
        r1=-(b/(2*a));
        printf("Both roots are equal r1 = r2 = %.2f\n",r1);
    }
    else if (d>0){
        r1=(-b/(2*a))+(sqrt(d)/(2*a));
        r2=(-b/(2*a))-(sqrt(d)/(2*a));
        printf("root 1 = %.2f\n",r1);
        printf("root 2 = %.2f\n",r2);
    }
    else{
        float i = sqrt(-d)/(2*a);
        r1=(-b/(2*a));
        printf("root 1 = %.2f + %.2f i\n",r1,i);
        printf("root 2 = %.2f - %.2f i\n",r1,i);
    }
}