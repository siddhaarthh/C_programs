#include<stdio.h>
void main()
{
    int s[10],i,n;
    printf("enter string length \n");
    scanf("%d",&n);
    printf("enter string \n");
    for(i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    printf("starting half elements \n");
    for(i=0;i<=n/2;i++)
    {
        printf("%c ",s[i]);
    }
    printf("\nlast half elements \n");
    for(i= (n/2 +1) ;i<=n;i++)
    {
        printf("%c ",s[i]);
    }
}
