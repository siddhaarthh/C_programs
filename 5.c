//search location of element
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5],a,b,i;
    printf("enter array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want the location ");
    scanf("%d",&a);

    for(i=0;i<5;i++)
    {
        if(arr[i]==a)
            a=i+1;
    }
        printf("%d",a);
}
