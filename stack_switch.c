#include<stdio.h>
int top=-1,max=0;
int STACK[100];

//pop
void pop()
	{
	if(top==-1)
		{
		printf("Stack is empty");
		return;
		}
	printf("Popped item is %d\n",STACK[top]);
	top--;
	}
	
//push	
void push(int val){
	if(top==max-1)
		{
		printf("Stack is full");
		return;
		}
	top++;
	STACK[top]=val;
	}
//display
void display()
	{
	if(top==-1)
		{
		printf("Stack is empty");
		return;
		}
	int top2=top;
	while(top2!=-1)
		{
		printf("%d\n",STACK[top2]);
		top2--;
		}
	}
void is_full()
	{
	if(top==max-1)
		printf("Stack is full");
	else
		printf("Stack is not full");
	return;			
	}
void is_empty()
	{
	if(top==-1)
		printf("Stack is Empty");
	else
		printf("Stack is not Empty");
	return;			
	}	
void peak()
	{
	if(top==-1)
		{
		printf("Stack is empty");
		return;
		}
	printf("Peaked item is %d\n",STACK[top]);
	}
void main()
	{
	int op,val;
	while(1){
	printf("Enter the size of the Stack : ");
	scanf("%d",&max);
	if(max>0 && 100>max)
	 break;
	else
	printf("Invalid Value\n");
	}
	while(op!=7){
	printf("\n\tMENU\n------------------------------------\n1)Push\n2)Pop\n3)Display\n4)Peak\n5)Is Full\n6)Is Empty\n7)Exit\nEnter your choice : ");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
		printf("Enter the value to push : ");
		scanf("%d",&val);
		push(val);
		break;
	case 2:
		pop();
		break;
	case 3:
		display();
		break;
	case 4:
		peak();
		break;
	case 5:
		is_full();
		break;
	case 6:
		is_empty();
		break;
	case 7:
		break;
	default:
		printf("Invalid choice");
	}
	}
	}

