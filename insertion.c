//insert element in array
#include<stdio.h>
#define max 100
void main()
{
    int a[max],i,n,c,d;
    printf("enter no. of elements in array \n");
    scanf("%d",&n);
    printf("enter elements in array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter value and location \n");
    scanf("%d%d",&c,&d);

    for(i=n-1;i>=d-1;i--)
    {
        a[i+1]=a[i];
    }
    a[d-1]=c;
    printf("final array after inserting \n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
