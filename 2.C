//enter array and print middle element
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5],i;
    printf("enter array");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
        }
    printf("middle element %d",arr[3]);
}
