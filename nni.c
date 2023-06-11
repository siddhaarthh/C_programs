#include<stdio.h>
void main()
{
    int a[5],i,t;
    printf("enter array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to be search ");
    scanf("%d",&t);
    for(i=0;i<5;i++)
    {
        if(t==i)
            printf("%d",i);
    }
    {

    }
    else
        printf("element not found");}
}
