#include<stdio.h>
int front=-1,rear=-1,size=0;
int QUEUE[100];

int is_full()
	{
	if(rear==size-1)
		{
		printf("Queue is full");
		return 1;
		}
	return 0;	
	}
	
int is_empty()
	{
	if(front==-1){
		printf("Queue is empty");
		return 1;
		}
	return 0;
	}
		
void peak()
	{
	if(is_empty()==1)
		return;
	printf("Peaked item is %d\n",QUEUE[front]);
	}

//dequeue
void dequeue()
	{
	if(is_empty()==1)
		return;
	printf("Removed item is %d\n",QUEUE[front]);
	if(front==rear)
	 front = rear = -1;
	 else
		front++;
	}
	
//enqueue	
void enqueue(int val){
	if(is_full()==1)
		return;
	if(front==-1 && rear==-1)
		front=rear=0;
	else
		rear++;
	QUEUE[rear]=val;
	}
	
//display
void display()
	{
	int front2;
	if(front==-1)
		{
		printf("Queue is empty");
		return;
		}
	for(front2=front;rear>=front2;front2++)
		{
		printf("%d\n",QUEUE[front2]);
		}
	}
	

void main()
	{
	int op,val;
	while(1){
		printf("Enter the size of the Queue : ");
		scanf("%d",&size);
		if(size>0 && 100>size)
	 		break;
		else
			printf("Invalid Value\n");
		}
	while(op!=7){
		printf("\n\tMENU\n------------------------------------\n1)Enqueue\n2)Dequeue\n3)Display\n4)Peak\n5)Is Full\n6)Is Empty\n7)Exit\nEnter your choice : ");
		scanf("%d",&op);
	switch(op)
	{
	case 1:
		printf("Enter the value : ");
		scanf("%d",&val);
		enqueue(val);
		break;
	case 2:
		dequeue();
		break;
	case 3:
		display();
		break;
	case 4:
		peak();
		break;
	case 5:
		if(is_full()==0)
			printf("Queue is Not Full");
		break;
	case 6:
		if(is_empty()==0)
			printf("Queue is Not Empty");
		break;
	case 7:
		break;
	default:
		printf("Invalid choice");
	}
	}
	}

