//sum of two matrix
#include<stdio.h>
#include<conio.h>
void main()
{
 int arr1[5][5],arr2[5][5],c[5][5],i,j,r1,r2,c1,c2;
    printf("enter row and coloum of first array ");
    scanf("%d%d",&r1,&c1);
    printf("enter row and coloum of second array ");
    scanf("%d%d",&r2,&c2);
    if(r1==r2 && c1==c2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("1st matrix is\n");
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
    printf("2nd matrix is\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    //addition of matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
     printf("\nthe addition of matrix is \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }
    else
        printf("not possible");
}
