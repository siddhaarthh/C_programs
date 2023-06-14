//operation on queue with no use of pointers
#include<stdio.h>
#define max 100

int r = -1 ,f = -1,queue[max],a;
void main()
{
do
{
    printf("1: insert 2: delete 3: display 4: exit \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1: insert();
                break;
        case 2: delete();
                break;
        case 3: display();
                break;
        case 4: break;
        default : printf("wrong choice is choosen \n");
    }
}while(a!=4);
}
int insert()
{
    int n;
    if(r == max-1)
    {
        printf("overflow \n");
    }
    else
    {
        if(f == -1)
        {
            f=0;}
            printf("enter element \n");
            scanf("%d",&n);
            r = r + 1;
            queue[r]=n;
    }
}
void delete()
{
    if(f == -1 || f > r)
    {
        printf("underflow \n");
    }
    else
        printf("%d is deleted element \n",queue[f]);
        f=f+1;
}
void display()
{
    int i;
    if(f == -1)
    {
        printf("empty \n");
    }
    else
        printf("queue is \n");
        for(i=f;i<=r;i++)
        {
            printf("%d \n",queue[i]);
        }
}
