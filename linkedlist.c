#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node * new, *x, *head, *l;
int count = 0;

void create()
{
	new = (struct node *)malloc(sizeof(struct node));
	printf("Enter The Value : ");
	int x;
	scanf("%d",&x);
	new -> data = x;
	new -> next = NULL;
}


void insert_begin()
{
	create();
	if (head==NULL)
	{
	head = new;
	}
	else
	{
	new ->next=head;
	head = new;
	}
	count++;
}


void insert_end()
{
	create();
	if(head == NULL)
	{
		head = new;
	}
	else
	{
		l = head;
		while(l ->next != NULL)
		{
			l = l ->next;
		}
		l -> next = new;
	}
	count++;
}		


void display()
{

struct node * l;
	if (head == NULL)
	{
	printf("EMPTY!!");
	}
	else
	{
	l = head;
	while( l!= NULL)
	{
	printf("%d",l ->data);
	l = l->next;
	}
	}
}	
	 
	 
	 
void insert_pos()
{
printf("Enter The Position To Which The Value To Be Inserted: ");
int pos,i;
scanf("%d",&pos);	 
if (pos == 1)
	{
	insert_begin();
	}
	else if(pos == count + 1)
	{
	insert_end();
	}
	else if (pos > count + 1)
	{
	printf("Invalid Choice Of Position!!");
	}
	else
		{
		create();
		l = head;
		for (i = 0; i < pos - 2; i++)
			{
				l = l->next;
			}
		new->next = l->next;
		l->next = new;
		count++;
		}	
	
	
}	
	


void main()
{
	insert_begin();
	insert_begin();
	insert_begin();
	display();
	insert_end();
	display();
	insert_pos();
	display();
}	
