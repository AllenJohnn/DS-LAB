#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
 
struct node *new, *head, *l, *sl, *t;
int count=0;
void create()
{
	new =(struct node*)malloc(sizeof(struct node));
	printf("Enter the value : ");
	int x;
	scanf("%d",&x);
	new->data=x;
	new->next=NULL;
	count++;
}                                                                                                                                             
void insert_beg()
{
	create();
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		new->next=head;
		head=new;
	}
}

void insert_end()
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
		l->next=new;
	}
}

void insert_anypos()
{
	int pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(pos==1)
	{
		insert_beg();
	}
	else if(pos==count+1)
	{
		insert_end();
	}
	else if(pos>count+1)
	{
		printf("Invalid position");
	}
	else
	{
		create();
		l=head;
		for(int i=0;i<pos-2;i++)
		{
			l=l->next;
		}
		new->next=l->next;
		l->next=new;
		count++;
	}
}

void display()
{
	if(head==NULL)
	{
		printf("Empty LL");
	}
	else
	{
		l=head;
		while(l!=NULL)
		{
			printf("%d\n",l->data);
			l=l->next;
		}
	}
}

void del_beg()
{
	if(head==NULL)
	{
		printf("LL is empty");
	}
	else
	{
		t=head;
		head=head->next;
		free(t);
		count--;
	}
}

void del_end()
{
	if(head==NULL)
	{
		printf("LL is empty");
	}
	else if(head->next==NULL)
	{
		l=head->next;
		head=NULL;
		free(l);
		count--;
		
	}
	else
	{
		sl=l=head;
		while(l->next!=NULL)
		{
			l=l->next;
			sl=l;
		}
		sl->next=NULL;
		free(l);
		count--;
	}
}
	
void main()
{
	int op;
	while(op!=5)
	{
		printf("\n\tMENU\n------------------------------------\n1)Insert at beg\n2)Insert at end\n3)Insert at any pos\n4)display\n5)Exit\n6)del at beg\nEnter your choice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				insert_beg();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				insert_anypos();
				break;
			case 4:
				display();
				break;
			case 5:
				break;
			case 6:
				del_beg();
				break;
			case 7:
				del_end();
				break;
			default:
				printf("Invalid choice");
		}
	}
}	
