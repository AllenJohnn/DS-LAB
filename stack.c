#include<stdio.h>
int top=-1,max=5;
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
	
void is_full()
	{
	if(top==max-1)
		printf("Stack is full");
	else
		printf("Stack is not full");
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
void main()
	{
	//push(10);
	//push(20);
	//push(20);
	//push(20);
	//push(20);
	//push(20);
	pop();

	display();
	}

