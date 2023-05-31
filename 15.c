//length of string
#include<stdio.h>
void main()
{
    char str[10];
    int len=0,i=0;
    printf("enter the string ");
    gets(str);
    while(str[i]!=NULL)
    {
        len=len+1;
        i=i+1;
    }
    printf("length if string is %d",len);
}
