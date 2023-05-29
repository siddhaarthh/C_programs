//do sum of diagonal elements
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][2],i,j,sum=0;
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
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           if(i==j)
            sum=sum+arr[i][j];
        }
    }
    printf("\n%d",sum);
}
