//structure of employee name registration num
#include<stdio.h>
struct employee
{
    char name[50];
    int regno;
};
void main()
{
    struct employee e[90];
    int i,a;
    printf("enter num of employees ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("\n enter name of employee ");
        scanf("%s",&e[i].name);
        printf("\n enter regis. no. of employee ");
        scanf("%d",&e[i].regno);
    }
    for(i=0;i<a;i++)
    {
    printf("\n%s\n%d",e[i].name[50],e[i].regno);
    }
}

