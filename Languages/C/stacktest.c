#include <stdio.h>
int i,n,x,ch;
int stack[100];
int top=-1;
void push(){
    if (top<n-1){
        top++;
        printf("Enter element to be pushed : ");
        scanf("%d",&stack[top]);
    }
    else{
        printf("Stack Overflow\n");
    }
}
void pop(){
    if (top>-1){
        printf("Popped element is : %d\n",stack[top]);
        top--;
    }
    else{
        printf("Stack Underflow\n");
    }
}
void display(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
    else{
        printf("Stack is Empty\n");
    }
}
void main(){
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    do{
        printf("Enter your choice : ");
        scanf("%d",&ch);
    switch(ch){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter valid choice\n");
            break;
    }
    }
    while(ch!=4);
}