//implementation of queue
#include<stdio.h>
#define max 5
typedef struct queue
{
    int data[max];
    int f,r;
}queue;
void init(queue *p)
{
    p->r=p->f=-1;
}
int full(queue *p)
{
    if(p->r==max-1)
    return(1);
    return(0);
}
int empty(queue *p)
{
    if(p->r==-1)
    return(1);
    return(0);
}
void enqueue(queue *p,int x)
{
    if(p->r==-1)
        p->r=p->r+1;
        p->data[p->r]=x;
}
int dequeue(queue *p)
{
    int x=p->data[p->f];
    if(p->r=p->f)
        p->r=p->f==-1;
    else
        p->f=p->f+1;
    return(x);
}
void display(queue *p)
{
    int i=p->f;
    while(i!=p->r){
    printf("%d\t",i);
    }
}
void main()
{
    queue q;
    int choice,x,a;
    init(&q);
    do
    {
    printf("1: enqueue 2: dequeue 3: display 4: exit \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: if(full(&q))
                {
                printf("overflow \n");
                }
                else
                {
                printf("enter element \n");
                scanf("%d",&a);
                enqueue(&q,x);
                }
                break;
       case 2: if(empty(&q))
               printf("underflow \n");
               else
               {
               printf("deleted item is %d \n",dequeue(&q));
               }
               break;
      case 3: if(empty(&q))
              printf("underflow \n");
              else
              {
               display(&q);
              }
              break;
    default: printf("wrong choice \n");
    }
    }while(choice!=4);
}
