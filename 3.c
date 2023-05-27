//print large and small no. in array
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5],i,large,small;
    printf("enter array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for largest no.
    large=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>large)
        large=arr[i];
    }
    printf("large is %d\n",large);
    //for small no.
    small=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]<small)
            small=arr[i];
    }
    printf("small is %d",small);
}
