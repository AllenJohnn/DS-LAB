#include<stdio.h>
#include<stdlib.h>

//create structure of node
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *new,*head=NULL,*l;
int count,x,pos,i;

//allocate memory
void create()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter a value to be inserted:");
	scanf("%d",&x);
	new->data=x;
	new->prev=NULL;
	new->next=NULL;
	count++;
}

//insertion to beginning
void ins_beg()
{
	create();
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		new->next=head;
		head->prev=new;
		head=new;
	}
	printf("Inserted to beginning \n");
}

//inserted to end
void ins_end()
{
	create();
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		l=head;
		while(l->next!=NULL)
		{
			l=l->next;
		}
		new->prev=l;
		l->next=new;
	}
	printf("Inserted to end \n");
}

//insertion to particular position
void ins_pos()
{
	printf("\n Enter a position to insert the node:");
	scanf("%d",&pos);
	if(pos==1)
	{
		ins_beg();
	}
	else if(pos==count+1)
	{
		ins_end();
	}
	else if(pos>count+1)
	{
		printf("\n Invalid position");
	}
	else
	{
		create();
		l=head;
		for(i=0;i<pos-2;i++)
		{
			l=l->next;
		}
		new->prev=l;
		new->next=l->next;
		l->next->prev=new;
		l->next=new;
		printf("Inserted to particular position \n");
	}
}

//display
void display()
{
	if(head==NULL)
	{
		printf("\n Empty");
	}
	else
	{
		l=head;
		while(l!=NULL)
		{
			printf("\n %d \t",l->data);
			l=l->next;	
		}
	}
}

void main()
{
	ins_beg();
	ins_beg();
	display();
	ins_end();
	display();
	ins_pos();
	display();
	
}
