//dynamic memory allocation
#include<stdio.h>
void main()
{
    int n,*p;
    printf("enter the num ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p!=NULL)
    {
        printf("allocation sucsessful");
        printf("%d",&p);
    }
    else
        printf("allocation unsuccessfull");
}
