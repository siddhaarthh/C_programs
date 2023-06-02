//swap function using call by value
#include<stdio.h>
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void main()
{
    int a,b;
    printf("enter a and b ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("\n a=%d \n b=%d",a,b);
}
