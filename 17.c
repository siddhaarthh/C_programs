//call by value function
#include<stdio.h>
void add(int x)
{
    x=x+10;
    printf("added num is %d",x);
}
void main()
{
    int x;
    printf("enter the num");
    scanf("%d",&x);
    add(x);
}
