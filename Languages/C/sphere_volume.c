#include <stdio.h>
int main(){
    int r;
    float vol;
    printf("Enter radius: ");
    scanf("%d",&r);
    vol= (float) (4/3)*3.14*r*r*r;
    printf("The volume is %f \n",vol);
}