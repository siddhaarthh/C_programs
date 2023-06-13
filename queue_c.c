#include<stdio.h>
#define max 100
int queue[max];
int f=-1,r=-1;
void main()
{
    int a,choice;
    printf("enter no. of elements in queue \n");
    scanf("%d",&a);
    printf("start operation on queue \n");
    do
    {
        printf("1: enqueue 2: dequeue 3: display 4: exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: break;
                    break;
            default: printf("wrong choice is entered \n");
                    break;
        }
    }while(choice!=4);
}

void enqueue()
{
    int b;
    if(r>=max-1)
    {
        printf("overflow \n");
    }
    else
        if(f==-1)
        f=0;
        printf("enter element \n");
        scanf("%d",&b);
        queue[r]=b;
        r=r+1;
}

void dequeue()
{
    if(r<=-1)
    {
        printf("underflow \n");
    }
    else
    {
        printf("deleted element is %d ",queue[r]);
        r--;
    }
}

void display()
{
    int i;
    if(r>=0)
    {
        for(i=f;i<=r;i++)
        printf("%d\n",queue[i]);
    }
    else
        printf("underflow \n");
}
