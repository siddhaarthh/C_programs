#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// insert in begninig
void beginsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n overflow...");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n new node inserted...");
    }
}

// insert at last
void lastinsert(int item)
{
    struct node *temp;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n overflow...");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = head;
            head = ptr;
            printf("\nnew node inserted...");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nnew node inserted...");
        }
    }
}

// insert at random position
void randominsert(int item, int loc)
{
    struct node *temp;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\noverflow...");
    }
    else
    {
        ptr->data = item;
        temp = head;
        for (int i = 0; i < loc - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nnew node inserted...");
    }
}

// delete from begining
void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty...");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the begining ...");
    }
}

// delete from last
void last_delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nlist is empty...");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...");
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...");
    }
}

// delete after specified location
void random_delete(int loc)
{
    struct node *ptr, *temp;
    ptr = head;
    for (int i = 0; i < loc; i++)
    {
        temp = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete...");
            return;
        }
    }
    temp->next = ptr->next;
    free(ptr);
    printf("\nDeleted node %d ", loc + 1);
}

// search for an element
void search(int item)
{
    struct node *ptr;
    int i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nEmpty List...");
    }
    else
    {
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("\nitem found at location %d\n ", i + 1);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("\nItem not found...");
        }
    }
}

// display function
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print...");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
    }
}

void sumEvenOdd()
{
    int evenSum = 0;
    int oddSum = 0;

    struct node *ptr, *temp;
    ptr = head;

    if (ptr == NULL)
    {
        printf("\nEmpty List...");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            if (temp->data % 2 == 0)
            {
                evenSum += temp->data;
            }
            else
            {
                oddSum += temp->data;
            }
            temp = temp->next;
        }
        printf("\nsum of even nodes=%d", evenSum);
        printf("\nsum of odd node=%d", oddSum);
    }
}

// printing even and odd nodes seperatly
void Oddnode()
{
    int i = 1;
    struct node *ptr, *temp;
    ptr = head;

    if (ptr == NULL)
    {
        printf("\nEmpty List...");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            if ((i % 2) != 0)
            {
                printf("%d\t", temp->data);
            }
            i++;
            temp = temp->next;
        }
    }
}

// main program
void main()
{
    int ch, item, loc;

label:
    printf("\n===============================================\n");
    printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.sum of even and odd nodes\n10.print even and odd nodes seperately\n11.Exit\n");
    printf("\nEnter your choice?");
    scanf("\n%d", &ch);

    switch (ch)
    {
    case 1:
        printf("\nenter the element to insert");
        scanf("%d", &item);
        beginsert(item);
        break;

    case 2:
        printf("\nenter the element to insert");
        scanf("%d", &item);
        lastinsert(item);
        break;

    case 3:
        printf("\nenter the element to insert");
        scanf("%d", &item);
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d", &loc);
        randominsert(item, loc);
        break;

    case 4:
        begin_delete();
        break;

    case 5:
        last_delete();
        break;

    case 6:
        printf("\n Enter the location of the node after which you want to perform deletion");
        scanf("%d", &loc);
        random_delete(loc);
        break;

    case 7:
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        search(item);

    case 8:
        display();
        break;

    case 9:
        sumEvenOdd();
        break;

    case 10:
        Oddnode();
        break;

    case 11:
        exit(0);
        break;
    }
    goto label;
}
