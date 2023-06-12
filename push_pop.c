#include<stdio.h>
int main()
{
    int n,stack[10],a,top,b,i;
    printf("enter num of element in stack \n");
    scanf("%d",&n);
    top = -1;
    void push()
    {
        if(top >= n-1)
        {
            printf("stack overflow \n");
        }
        else
        printf("enter num to insert \n");
        scanf("%d",&b);
        top++;
        stack[top]=b;
    }
    void pop()
    {
        if(top <= -1)
        {
            printf("stack is empty \n");
        }
        else
            printf("the poped element is %d \n",stack[top]);
            top--;
    }
    void display()
    {
        if(top >= 0)
        {
        printf("elements in stack \n");
        for(i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
        }
        else
            printf("\n empty stack \n");
    }
    do
    {
    printf("1:push 2:pop 3:display 4:exit \n");
    scanf("%d",&a);
    switch(a)
    {
    case 1: push();
            break;
    case 2: pop();
            break;
    case 3: display();
            break;
    case 4: break;
    default: printf("invalid choice \n");
             break;
    }
    }while(a!=4);
}
