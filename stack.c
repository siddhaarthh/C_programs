#include<stdio.h>
#define max 100
void main()
{
    int top=-1,stack[max],a,choice;
    printf("enter size of stack \n");
    scanf("%d",&a);
    printf("start operation on stack \n");

     void push()
   {
       int b;
       if(top>=a-1)
        printf("stack overflow \n");
       else
        printf("enter no. to push \n");
        scanf("%d",&b);
        top++;
        stack[top]=b;
   }

   void pop()
   {
       if(top <= -1)
        printf("stack underflow \n");
       else
        printf("poped element is %d ",stack[top]);
       top--;
   }

   void display()
   {
       int i;
       if(top >= 0)
       {
        printf("elements in the stack \n");
       for(i=top;i>=0;i--)
       {
           printf("%d \n",stack[i]);
       }
       }
       else
        printf("stack empty \n");
   }

    do
    {
        printf("enter 1: push 2: pop 3: display 4: exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : push();
                     break;
            case 2 : pop();
                     break;
            case 3 : display();
                     break;
            case 4 : break;
            default : printf("you have entered wrong choice \n");
                      break;
        }
   } while(choice!=4);
}
