//first add all coloum then add all
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][2],i,j,sum,a;
    printf("enter elements of array ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("the output is :");
    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("|  %d",sum);
        printf("\n");
    }
}
