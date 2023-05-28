//square matrix
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3][3],i,j;
    printf("enter elements of array ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
            printf("\n");
    }
}
