//print address of coloum
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[3][3],i,j;
    printf("enter array");
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

    for(j=0;j<=2;j++)
    printf("address of coloum 1 is :%u\n",arr[j]);

}
