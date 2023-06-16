#include<stdio.h>
#define max 5
int queue[max];
front=-1;
rear=-1;

void main()
{
    int a;
    do
    {
        printf("\n enter \n 1:insert \n 2:delete \n 3:display \n 4:exit \n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:break;
            default:printf("wrong choice entered \n");
        }
    }while(a!=4);
}

void insert()
{
    int b;
    if(rear==max-1)
        printf("FULL \n");

    else
            if(front==-1)
            {
            front=0;
            }
            printf("enter the value to insert \n");
            scanf("%d",&b);
            rear=rear+1;
            queue[rear]=b;
}

void delete()
{
    if(front==-1 || front>rear)
        printf("empty queue \n");

    else
        printf("%d is deleted from queue \n",queue[front]);
        front++;
}

void display()
{
    int i;
    if(front==-1 || front>rear)
        printf("empty queue \n");
    else
        printf("queue is \n");
        for(i=front;i<=rear;i++)
        printf("%d \n",queue[i]);
}
