#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *new, *head = NULL, *l, *t;
int count = 0, x, pos, i;

void create()
{
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value to be inserted: ");
    scanf("%d", &x);
    new->data = x;
    new->prev = NULL;
    new->next = NULL;
    count++;
}

void ins_beg()
{
    create();
    if(head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head->prev = new; 
        head = new;
    }
    printf("Inserted at beginning\n");
}

void ins_end()
{
    create();
    if(head == NULL)
    {
        head = new;
    }
    else
    {
        l = head;
        while(l->next != NULL)
        {
            l = l->next;
        }
        new->prev = l;
        l->next = new;
    }
    printf("Inserted at end\n");
}

void ins_pos()
{
    printf("\nEnter position to insert: ");
    scanf("%d", &pos);

    if(pos == 1)
    {
        ins_beg();
    }
    else if(pos == count + 1)
    {
        ins_end();
    }
    else if(pos > count + 1 || pos < 1)
    {
        printf("Invalid position\n");
    }
    else
    {
        create();
        l = head;
        for(i = 0; i < pos - 2; i++)
        {
            l = l->next;
        }
        new->prev = l;
        new->next = l->next;
        l->next->prev = new;
        l->next = new;
        printf("Inserted at position %d\n", pos);
    }
}



void del_begin() 
{
    if (head == NULL)
     {
        printf("Linked List is empty\n");
     } 
     else 
     {
        t = head;
        if (head->next == NULL) 
        {
            free(head);
            head = NULL;
        } 
          else 
          {
            head = head->next;
            head->prev = NULL;
            free(t);
          }
        count--;
        printf("Deleted from beginning\n");
    }
}


void del_end()




void display()
{
    if(head == NULL)
    {
        printf("\nEmpty Linked List.\n");
    }
    else
    {
        l = head;
        printf("\nDoubly Linked List elements:\n");
        while(l != NULL)
        {
            printf("%d\t", l->data);
            l = l->next;
        }
        printf("\n");
    }
}



int main()
{
    int choice;

    while(1)
    {
        printf("\n--- DOUBLY LINKED LIST MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Display\n");
        printf("5. Delete From Beginning\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                ins_beg();
                break;
            case 2:
                ins_end();
                break;
            case 3:
                ins_pos();
                break;
            case 4:
                display();
                break;
            case 5:
           	 del_begin();
            	break;
            case 6:
            	break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
