#include<stdio.h>

void main()
{
    int top,x,n,stack[10],i;
    top = -1;
    printf("enter num of elements in stack\n");
    scanf("%d",&n);
    void push()
{
    if(top >= n-1)
    {
        printf("overflow\n");
    }
    else
    printf("\ninsert num \n");
    scanf("%d",&x);
    top++;
    stack[top]=x;
}
void pop()
{
    if(top <= -1)
    {
        printf("\n empty stack \n");
    }
    else
        printf("\n the poped element is %d \n",stack[top]);
        top--;
}
void display()
{
    if(top >= 0)
    {
        printf("elemets in stack \n");
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
    else
        printf("empty stack \n");
}
    do
    {
    printf("enter 1:pop 2:push 3:display 4:exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1 : pop();
                 break;
        case 2 : push();
                 break;
        case 3 : display();
                 break;
        case 4 : break;
        default : printf("\n wrong selection \n");
    }
    }while(x!=4);
}
