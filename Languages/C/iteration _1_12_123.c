#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter how many lines u need: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}