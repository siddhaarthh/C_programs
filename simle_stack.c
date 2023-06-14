#include<stdio.h>
#define max 5
int top=-1;
int stack[max];
void main()
{
    int a;
    do
    {
        printf("\n enter \n 1:push \n 2:pop \n 3:display \n 4: exit \n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:break;
            default:printf("wrong choice entered \n");
        }
    }while(a!=4);
}

void push()
{
    int b;
    if(top==max-1)
        printf("stack is full \n");
    else
        if(top=-1)
    {
        top=0;
    }
    printf("enter value to insert \n");
    scanf("%d",&b);
    top++;
    stack[top]=b;
}

void pop()
{
    if(top==-1)
        printf("empty stack \n");
    else
        printf("%d is deleted element \n",stack[top]);
        top--;
}

void display()
{
    int i;
    if(top==-1)
        printf("empty stack \n");
    else
        printf("elements in stack are \n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
}
