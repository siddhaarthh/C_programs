 #include <stdio.h>
#include <stdlib.h>//BAsic operations in Queue: ENQUEUE,DEQUEUE,DISPLAY
#define max 2//Queue Implementation acn be done with the help of array and link list
//Implementation of simple queue
typedef struct Queue{
int data[max];
int rear,front;
}Queue;
void init(Queue *s);
int full(Queue *s);
int empty(Queue *s);
void ENQUEUE_R(Queue *s );
void DEQUEUE_F(Queue *s);
void ENQUEUE_F(Queue *s );
void DEQUEUE_R(Queue *s);

void DISP(Queue *s);

void main(){
Queue q;
int choice;
init(&q);
do{
   printf("Enter\n1:ENQUEUE-R\n2:DEQUEUE-F\n3:ENQUEUE-F\n4:DEQUEUE-R\n5:DISPLAY\n6:EXIT\n");
   scanf("%d",&choice);
   switch(choice){
    case 1:{
    if(full(&q)){
    printf("Queue Overflow");

}
else{


ENQUEUE_R(&q);
}
break;
}
case 2:{
if(empty(&q)){
printf("QUEUE Underflow");
}
else{
DEQUEUE_F(&q);
}
break;
}
case 3:{
    if(full(&q)){
    printf("Queue Overflow");

}
else{


ENQUEUE_F(&q);
}
break;
}
case 4:{
if(empty(&q)){
printf("QUEUE Underflow");
}
else{
DEQUEUE_R(&q);
}
break;
case 5:
if(empty(&q)){
printf("QUEUE Underflow");
}
else{
DISP(&q);
}
break;

case 6: break;
default: {
printf("Invalid choice");
break;
}
}
}

}while(choice!=6);}
void init(Queue *s){
s->front=-1;
s->rear=-1;
}
int full(Queue *s){
if(s->rear==max-1 && s->front==0 || s->front==(s->rear+1)%max)
return 1;
return 0;
}
int empty(Queue *s){
if(s->front==-1)
return 1;
return 0;

}
void ENQUEUE_R(Queue *s ){
int e;
printf("Enter the element to be inserted \n");
scanf("%d",&e);
if(s->rear==-1)

s->rear=s->front=0;
else
s->rear=(s->rear+1)%max;


s->data[s->rear]=e;

}
void DEQUEUE_F(Queue *s){
int e;
e=s->data[s->front];
s->front=(s->front+1)%max;
printf("The element deleted is\n %d \n",e);

}
void DISP(Queue *s){
int i;
i=s->front;
while(i!=s->rear){
printf("%d",s->data[i]);
i=(i+1)%max;
}
printf("%d",s->data[i]);

}
void ENQUEUE_F(Queue*s){
int e;
printf("Enter the element to be inserted \n");
scanf("%d",&e);
if(s->rear==-1){

s->rear=s->front=0;
s->data[s->front]=e;

}
else{
s->front=(s->front-1+max)%max;
s->data[s->front]=e;
}


}
void DEQUEUE_R(Queue*s){
int e;
e=s->data[s->rear];
if(s->rear==s->front){
s->rear=s->front=-1;

}
else{
s->rear=(s->rear-1+max)%max;
}
printf("The deleted element is\n %d\n",e);
}
