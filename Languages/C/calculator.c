
//Calculator

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter other number: ");
    scanf("%f",&b);
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("6. Root\n");
    printf("Enter choice :");
    scanf("%f",&d);
    if (d==1){
        printf("%f",a+b);
    }
    else if (d==2){
        printf("%f",a-b);
    }
    else if (d==3){
        printf("%f",a*b);
    }
    else if (d==4){
        printf("%f",a/b);
    }
    else if (d==5){
        printf("%f",pow(a,b));
    }
    else if (d==6){
        printf("%f",pow(a,1/b));
    }
    else {
        printf("Invalid input\n");
    }
    
}