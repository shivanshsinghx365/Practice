#include <stdio.h>
int main(){
    int n,first,second,third,i;
    printf("Enter how many numbers to print: ");
    scanf("%d",&n);
    first=1;
    second=1;
    printf("%d, ",first);
    printf("%d",second);
    for (i=3;i<=n;i++){
        printf(",");
        third=first+second;
        first=second;
        second=third;
        printf(" %d",third);
    }
    printf("\n");
}