//enter two array
#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,i,j,arr1[7][7],arr2[7][7];
    printf("enter rows and coloum of first matrix ");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and coloum of second matrix ");
    scanf("%d%d",&r2,&c2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("first array is \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("second array is \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}


