//print 3d matrix
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5][5][5],i,j,k;
    printf("enter elemets for 3d matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    printf("\n 3d matrix is \n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
