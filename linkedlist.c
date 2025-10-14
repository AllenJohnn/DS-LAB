#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
 
struct node *new, *head, *l, *sl, *t, *n, *pn;
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
void insert_begin()
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
	int pos,i;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(pos==1)
	{
		insert_begin();
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
		for(i=0;i<pos-2;i++)
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
		printf("Empty Linked List");
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

void del_begin()
{
	if(head==NULL)
	{
		printf("Linked List is empty");
	}
	else
	{
		t=head;
		head=head->next;
		count--;
	}
}

void del_end()
{
	if(head==NULL)
	{
		printf("Linked List is empty");
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
			sl=l;
			l=l->next;
			
		}
		sl->next=NULL;
		free(l);
		count--;
	}
}



void del_pos()
{
int i,pos;
	printf("Enter The Position From Which To Be Deleted:");
	scanf("%d",&pos);
if (head == NULL)
	{
	printf("EMPTY!!");
	}
	
else
		{
		if (pos == 1)
			{
				del_begin();
			}
		else if (pos == count)
			{
				del_end();
			}
		else if	(pos > count)
			{
			printf("Invalid Position");
			}
		else
			{
			n = pn = head;
			for(i=0;i<pos-1;i++)
				{
				pn = n;
				n = n->next;
				}
				pn->next= n->next;
				free(n);
				count--;
			}
		}
}			
			

	
void main()
{
	int ch;
	while(ch!=8)
	{
		printf("\n\tMENU\n----------------------------\n1)Insert At Begining\n2)Insert At End\n3)Insert At Any Position\n4)Delete From Begining\n5)Delete From End\n6)Delete From Any Position\n7)Display\n8)Exit\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_begin();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				insert_anypos();
				break;
			case 4:
				del_begin();
				break;
			case 5:
				del_end();
				break;
			case 6:
				del_pos();
				break;
			case 7:
				display();
				break;
			case 8:
				break;	
			default:
				printf("Invalid choice");
		}
	}
}	
