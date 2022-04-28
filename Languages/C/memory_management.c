#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n,i;
    printf("\tRUNTIME MEMORY ALLOCATION\n");
    printf("Enter the maximum number of characters you want to input\n");
    scanf("%d",&n);
    char *p = (char *)malloc(n*sizeof(char));
    if(p==NULL)
    {
        printf("\nMemory allocation failed\n");
        exit(0);
    }
    puts("Enter the string");
    for (i=0;i<n;i++)
    {
        scanf("%c",&p[i]);
    }
    *(p+i)='\0';
    printf("\nThe string is %s\n",p);
    fflush(stdin);
    printf("\nEnter new size\n");
    scanf("%d",&n);
    p=realloc(p,n*sizeof(char));
    puts("\nEnter a new string");
    scanf("%s",p);
    for (i=0;i<n;i++)
    {
        scanf("%c",p+i);
    }
    printf("\nThe new string is %s\n",p);
    free(p);
}