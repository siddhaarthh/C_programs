//print binary number of the number
#include<stdio.h>
#include<conio.h>
void main()
{
    int binary[50],a,b,i;
    printf("enter the number");
    scanf("%d",&a);
    for(i=0;a>0;i++)
    {
        b=a%2;
        binary[i]=b;
        a=a/2;
    }
    for(i=i-1;i>=0;i--)
    printf("%d ",binary[i]);
}
