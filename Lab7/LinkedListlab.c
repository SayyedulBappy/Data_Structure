#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct node *head;

void insertFirst();
void display();
void search();
int main()
{
    int choice;

    while( choice!=5)
    {
        printf("\n\n");
        printf(" ******* LINKED LIST OPERATIONS ********* \n\n");
        printf("1- Display Items \n2- Insert item at first \n");
        printf("3-  Delete Item \n4 - Search item \n");
        printf("5- Exit.");
        printf(" \n\nYour choice ---> ");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
 display();


            break;
        case 2:

insertFirst();
            break;
        case 3:



            break;
        case 4:
search();
            break;
 case 5:

            break;

        default:
            printf("\n\n\t Invalid Choice: \n");
        }
    }
}



void insertFirst()
{
    struct Node *ptr;
    int item;
    ptr = (struct Node *)malloc(sizeof(struct Node *));

    printf("\n Enter value\n");
    scanf("%d", &item);
    ptr->data = item;
    ptr -> next = head;
    head = ptr;
    printf("\n Node inserted");

}

void display()
{
    struct Node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinted values . . . .\n");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}

void search( )
{
    int item ,i=0,flag=0;
    struct Node *ptr ;


   ptr = head;

   if(ptr == NULL)
    {
        printf("Nothing in the list");
    }
    else
    {   printf("Enter value to search: ");
scanf("%d",&item);

        while(ptr!=NULL)
        {
            if(ptr-> data == item)
            {
                 printf("%d at node %d",ptr->data,i+1);
                }
            i++;
                 ptr = ptr->next;

        }
    }
}


