//print a list of all armstrong numbers between 1 & 1000
#include <stdio.h>
int main(){
int a,b,c,d,i;
for (i=1;i<1000;i++){
    c=i;
    d=0;
    while (c>0){
    b=c%10;
    c=c/10;
    a=b*b*b;
    d+=a;
    }
    if (d==i){
        printf("%d is Armstrong\n",i);
    }
}
    return 0;
}