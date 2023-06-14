//Queue Implementation
#include <stdio.h>
#include <conio.h>
#define MAX 4
typedef struct Queue
{
    int data[MAX];
    int F,R;
}
Queue;
void init(Queue *P)
{
    P->R=P->F=-1;
}
int full(Queue *P)
{
    if((P->R+1)%MAX==P->F)
    return(1);
    return(0);
}
int Empty(Queue *P)
{
    if(P->R==-1)
    return(1);
    return(0);
}
int Enqueue(Queue *P, int x)
{
    if(P->R==-1)
    P->R=P->F=0;
    else
    P->R=(P->R+1)%MAX;
    P->data[P->R]=x;
}
int Dequeue(Queue *P)
{
    int x=P->data[P->F];
    if(P->R==P->F)
    P->R=P->F=-1;
    else
    P->F=(P->F+1)%MAX;
    return(x);
}
void Display(Queue *P)
{
    int i;
    for(i=P->F;i<=P->R;i=(i+1)%MAX)
    printf("%d ",P->data[i]);

}
void main ()
{
    Queue q;
    int x,choice;
    init(&q);
    do
    {
        printf("1:Enqueue 2:Dequeue 3:Display 4:Exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: if(full(&q))
                printf("Queue is overflow");
                else
                {
                printf("Enter Data:");
                scanf("%d",&x);
                Enqueue(&q,x);
                }
                break;
        case 2: if(Empty(&q))
                printf("Queue is Underflow \n");
                else
                {
                printf("Remove Element Is\n: %d \n",Dequeue(&q));
                }
                break;
        case 3: if (Empty(&q))
                printf("Underflow! \n");
                else
                Display(&q);
                break;
        case 4: exit(0);
    }}while(choice!=4);
    return(0);
}
