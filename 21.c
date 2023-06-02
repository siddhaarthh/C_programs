//using function enter array
#include<stdio.h>
void larsmall(int arr[5],int a)
{
    int large,small,i;
    large=arr[0];
    for(i=0;i<a;i++)
    if(arr[i]>large)
       {
        large=arr[i];
       }
    printf("large is %d",large);
    small=arr[0];
    for(i=0;i<a;i++)
    {
        if(arr[i]<small)
            small=arr[i];
    }
    printf("small is %d",small);
}
    void main()
    {
        int arr[5],i,a;
        printf("enter the num of element");
        scanf("%d",&a);
        printf("\nenter the array ");
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        larsmall(arr,a);
    }
