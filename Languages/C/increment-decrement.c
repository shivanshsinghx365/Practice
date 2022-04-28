#include <stdio.h>
int main(){
    int a=4;
    printf("%d\n",a++); //This prints 4 but value of a is changed to 5 after this
    printf("%d\n",a); //This prints 5 bcz value of a is changed in previous line
    printf("%d\n",++a); //This prints 6 bcz value of a is updated then printed
    printf("%d\n",++a + ++a); //this prints 16, bcz 1st value is changed to 7, then to 8 
    //and then due to precedence it is added and gives a+a=8+8=16
    printf("%d\n",++a + a++); //this prints 19 bcz
    printf("%d\n",a++ + ++a); //This one is 22 bcz 
    return 0;
}