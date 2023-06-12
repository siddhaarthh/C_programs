#include<stdio.h>
#define max 5
void main()
{
    int a,que[max],b;
    printf("no. of elements in queue ");
    scanf("%d",&a);
    do
    {
        printf("enter 1:insert 2:delete 3:display 4:exit \n");
        scanf("%d",&b);
        switch(b)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:break;
        }
    }while(b!=4);
}

void insert()
{
    int z;
    printf("enter num to insert \n");
    scanf("%d",&z);

}
