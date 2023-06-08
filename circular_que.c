#include<stdio.h>
#define max 5
int cir_queue[max];
int front=-1;
int rear=-1;

void main()
{
    int a;
    do
    {
        printf("\n enter \n 1:insert \n 2:delete \n 3:display \n 4:exit \n");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            insert();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        }
    }
    while(a!=4);
}

void insert()
{
    int b;
    printf("enter the value to insert \n");
    scanf("%d",&b);
    if(front==(rear+1)%max)
        printf("queue is full \n");
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        cir_queue[rear] = b;
    }
    else
    {
        rear=(rear+1)%max;
        cir_queue[rear] = b;
    }
}

void dequeue()
{
    if(front == -1 & rear== -1)
        printf("empty queue \n");
    else if(front==rear)
    {
        printf("deleted element is %d\n",cir_queue[front]);
        front=-1;
        rear=-1;
    }
    else{
        printf("deleted element is %d\n",cir_queue[front]);
        front=((front+1)%max);
    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
        printf("empty queue \n");
    else
        printf("queue is\n");
    for(i=front; i!=rear; i=(i+1)%max)
    {
        printf("%d \n",cir_queue[i]);
    }
    printf("%d\n",cir_queue[i]);
}
