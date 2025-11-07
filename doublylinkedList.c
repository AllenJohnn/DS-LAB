#include<stdio.h>
#include <stdlib.h>

int count = 0;
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *new, *head = NULL, *l, *t, *sl, *n, *pn;

void create() {
    int x;  
    new = (struct node*) malloc(sizeof(struct node));
    printf("\nEnter The Value To Be Inserted: ");
    scanf("%d", &x);
    new->data = x;
    new->prev=NULL;
    new->next = NULL;
    count++;
}

void ins_big()
{
    create();
    
    if (head == NULL)
    {
        head = new;
    } else 
    	{
        new->next = head;
        head->prev=new;
        head = new;
    	}
    
}

void ins_end() 
{
    create();
    if (head == NULL) 
    {
        head = new;
    } else 
    {
        l = head;
        while (l->next != NULL) 
        {
            l = l->next;
        }
        new->prev=l;
        l->next = new;
        
    }
   
}

void ins_pos() 
{
     int pos;
    printf("\nEnter The Position To Insert The Node: ");
    scanf("%d", &pos);
    if (pos == 1) 
    {
        ins_big();
    } 
    else if (pos == count + 1) 
    {
        ins_end();
    } 
    else if (pos > count + 1) 
    {
        printf("\nInvalid Position!\n");
    } 
    else 
    {
        create();
        l = head;
        for (int i = 0; i < pos - 2; i++) 
        {
            l = l->next;
        }
        new->prev=l;
        new->next = l->next;
        l->next->prev=new;
        l->next = new;
        count++;
    }
}


void del_beg()
{
	if(head==NULL)
	{
	printf("Linked List Is Empty!!");
	}
	else if(head->next==NULL)
	{
	l=head;
	head=NULL;
	free(l);
	count--;
	}
	else
	{
	t=head;
	head=head->next;
	head->prev=NULL;
	free(t);
	count--;
	}	
}

void del_end()
{
	if(head==NULL)
	{
		printf("Linked List Is Empty");
	}
	else if(head->next==NULL)
	{
		l=head;
		head=NULL;
		free(l);
		count--;
		
	}
	else
	{
		sl=l=head;
		while(l->next!=NULL)
		{
			sl=l;
			l=l->next;
		}
		sl->next=NULL;
		free(l);
		count--;
	}
}

void del_anypos()
{
	int pos;
	printf("Enter The Position From Where To Be Deleted : ");
	scanf("%d",&pos);
	if(pos==1)
	{
		del_beg();
	}
	else if(pos==count)
	{
		del_end();
	}
	else if(pos>count)
	{
		printf("Invalid Position");
	}
	else
	{
		sl=l=head;
		for(int i=0;i<pos-1;i++)
		{
			sl=l;
			l=l->next;
		}
		sl->next=l->next;
		l->next->prev=sl;
		free(l);
		count--;
	}
}

void display() 
{
    if (head == NULL) 
    {
        printf("\nLinked List Is Empty!\n");
    } else 
    {
        printf("\nLinked List Is: ");
        l = head;
        while (l != NULL) 
        {
            printf("%d ", l->data);
            l = l->next;
        }
        printf("\n");
    }
}

void main()
{
	int op;
	while(op!=8)
	{
		printf("\n\tMENU\n------------------------------------\n1)Insert At Beginning\n2)Insert At End\n3)Insert At Any Position\n4)Deletion At Beginning\n5)Deletion At End\n6)Deletion From Any Position\n7)Display\n8)Exit\nEnter your choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				ins_big();
				break;
			case 2:
				ins_end();
				break;
			case 3:
				ins_pos();
				break;
			case 4:
				del_beg();
				break;
			case 5:
				del_end();
				break;
			case 6:
				del_anypos();
				break;
			case 7:
				display();
				break;
			case 8:
				break;
			default:
				printf("Invalid Choice");
		}
	}
}	
