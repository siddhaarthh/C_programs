#include<stdio.h>
#include<conio.h>
void main()
{
    char c,t,y,n;
    printf("enter y to run the programe \nenter n to proceed more \n");
    scanf("%s%s",&c,&t);
    if(c==y && t==n)
    {
        printf("i win \n");
    }
    else
        printf("you have not chosen yes \nthank you");
}

