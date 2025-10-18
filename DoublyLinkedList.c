#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *newnode, *head = NULL, *l;
int count = 0, x, pos, i;

void create()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter a value to be inserted: ");
    scanf("%d", &x);
    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;
    count++;
}

void ins_beg()
{
    create();
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    printf("Inserted at beginning\n");
}

void ins_end()
{
    create();
    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        l = head;
        while(l->next != NULL)
        {
            l = l->next;
        }
        newnode->prev = l;
        l->next = newnode;
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
        newnode->prev = l;
        newnode->next = l->next;
        l->next->prev = newnode;
        l->next = newnode;
        printf("Inserted at position %d\n", pos);
    }
}

void display()
{
    if(head == NULL)
    {
        printf("\nList is empty.\n");
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
        printf("5. Exit\n");
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
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
