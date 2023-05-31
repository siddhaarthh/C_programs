//pointer
#include<stdio.h>
void main()
{
    int a=4,*ptr,**pt;
    ptr=&a;
    pt=&ptr;
    printf("the value of a is %d ",a);
    printf("address of a is %u",*ptr);
    printf("address of a is %u",pt);
}
//agr star mark krenge to value aaegi
//agr direct likhe to address
