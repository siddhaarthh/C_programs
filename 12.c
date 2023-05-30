//multiplication of matrix
#include<conio.h>
#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],i,j,r1,r2,c1,c2,k;
    printf("enter num of rows and coloum in first matrix ");
    scanf("%d%d",&r1,&c1);
    printf("enter num of rows and coloum in second matrix ");
    scanf("%d%d",&r2,&c2);
    if(r2==c1)
    {
        printf("\n enter elements for first matrix\n ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d ",&a[i][j]);
            }
        }
        printf("\n the first matrix is\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("\n enter elements for second matrix \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d ",&b[i][j]);
            }
        }
         printf("\n the second matrix is \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        //multiplication code
        printf("\nthe multiplication of two matrix is\n ");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r1;k++)
                {
                c[i][j]=c[i][j]+a[i][j]*b[i][j];
                }
            }
        }
         for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("not possible ");
}
