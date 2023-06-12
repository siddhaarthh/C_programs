#include<stdio.h>
void main()
{
    int i,j,k,s;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++)
        {
              printf("%d ",k);
        }
        printf("\n");
    }
}

