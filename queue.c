//implementation of queue
#include<stdio.h>
#define max 5
    int cqueue[max];
   int f=-1;
   int r=-1;

void main()
{
    int choice,a;
    printf("enter no. of elements in queue \n");
    scanf("%d",&a);
    printf("start operation on cqueue \n");
    do
    {
        printf("enter 1: enqueue 2: dequeue 3: display 4: exit \n");
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
            default:printf("wrong choice is entred \n");
        }
    }while(choice !=4);
}

void enqueue()
{
    int b;
    if((r==max-1 && f==0) || (f==r+1))
    {
        printf("overflow \n");
    }
    if(f==-1)
    {
        f=0;
        r=0;
    }
    else
    {
        if(r==max-1)
            r=0;
        else
            r=r+1;
    }
    printf("enter the item \n");
    scanf("%d",&b);
    cqueue[r]=b;
}

void dequeue()
{
    if(f==-1)
    {
        printf("empty \n");
    }
    printf("deleted element is %d\n",cqueue[f]);
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else
    {
        if(f==max-1)
            f=0;
        else
            f++;
    }
}

void display()
{
    int i;
    if(f==-1 && r==-1)
        printf("queue empty \n");
    else
    for(i=f;i!=r;i=(i+1)%max)
        printf("%d\n",cqueue[i]);

    printf("%d",cqueue[i]);
}
