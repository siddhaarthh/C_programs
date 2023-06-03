//reverse of string using string
//not clear
#include<stdio.h>
void reverse(char str[])
{
   int i,j,len=0;
   char rev[50];
   while(str[i]!=0)
   {
       len=len+1;
       i=i+1;
   }
   for(i=0;i<len;i++)
   {
       for(j=0;j<len-1;j--)
       {
           rev[i]=str[j];
       }
   }
   printf("string rev is %s",rev[i]);
}
void main()
{
    char str[50];
    printf("enter words ");
    scanf("%c",str[50]);
    reverse(str);
}
