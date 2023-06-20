#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 100

int main()
{
    int a,arr[max],i,b=0;
    printf("enter no. of digit in array");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<=a; i++)
    {
        b=b+arr[i];
    }
    printf("%d",b);

    return 0;
}
