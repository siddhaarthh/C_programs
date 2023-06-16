//prime number
#include<stdio.h>
void main()
{
    int a,i,count=0;
    printf("enter the number ");
    scanf("%d",&a);
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
            printf("not prime num");
            count++;
        }
        if(count==0)
            printf("prime");

    }
}
