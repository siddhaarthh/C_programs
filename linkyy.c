#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;


void main()
{
    int a,b;
    do
    {
    printf("\n enter \n 1:insert_at_begining \n 2:insert_at_end \n 3:display\n 4:exit \n 5:delete_from_beginning \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("\n enter item ");
               scanf("%d",&b);
               bigin_insert(b);
               printf("\n new node is : %d",b);
               break;
       case 2:printf("\n enter item 1\n");
              scanf("%d",&b);
              printf("end node is : %d",b);
              break;
       case 3:display();
              break;
       case 4:break;
       case 5:delete_front();
              break;
       default:printf("wrong choice \n");
    }
    }while(a!=8);
}

//insertion at beginning
int bigin_insert(int item)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
        printf("\n overflow ");
    else
        ptr->data=item;
        ptr->next=head;
        head=ptr;
}
//insertion at end
void end_insert(int item)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        printf("\n overflow \n");
    }
    else
    {
        ptr->data=item;
        if(ptr->next==NULL)
        {
            ptr->next=temp;
            ptr->data=item;
            head=ptr;
            printf("\n new node inserted \n");
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("\n new node inserted \n");
        }
    }
}
//delete from beginning
int delete_front()
{
   struct node *ptr;

   if(head==NULL)
   {
       printf("list is empty \n");
   }
   else
   {
   ptr=head;
   head=ptr->next;
   free(ptr);
   printf("\n node deleted from beginning \n");
   }
}

//display
void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\n empty list \n");
    }
    else
        {
        while(ptr != NULL)
    {
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
    }
}
