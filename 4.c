//print elements of array
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[4],i;
    printf("enter array ");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements of array is");
    for(i=0;i<4;i++)
    {
        printf("%d\t",arr[i]);
    }
}
