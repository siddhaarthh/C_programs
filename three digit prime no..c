#include<stdio.h>
void main()
{
    int a,i,count=0;
    printf("enter num : ");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
            count++;
    }
    if(count==0)
        printf("num is prime ");
    else
        printf("num is not prime ");
}
