#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node * new, *x, *head;

void create()
{
	new = (struct node *)malloc(sizeof(struct node));
	printf("Enter The Value : ");
	int x;
	scanf("%d",&x);
	new -> data = x;
	new -> next = NULL;
}


void insert_begi()
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
	 










void main()
{
	insert_begi();
	insert_begi();
	insert_begi();
	display();
}	
