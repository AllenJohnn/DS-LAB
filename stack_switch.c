#include<stdio.h>
#include<stdlib.h>

int stack[5];
int value,top=-1;


void push()
{
    if(top==4)
    {
        printf("The Stack Is Full!!");
    }
    else
    {
        top++;
        printf("Enter The Value To Be Inserted To The Stack");
        scanf("%d",&value);
        stack[top]=value;
    }    
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow!!");
    }
    else
    {
        printf("The Value %d has been Popped Out Of The Stack",stack[top]);
        top--;
    }
}

void display()
{
    printf("The Elements In The Stack Are: ");
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}


void peek()
{
    if(top == -1)
    {
        printf("The Stack Is Empty");
    }
    else
    {
        printf("The Top Most Element In The Stack Is %d",stack[top]);
    }
}

void isfull()
{
    if(top==4)
    {
        printf("The Stack Is Full");
    }
    else
    {
        printf("The Stack Is Not Empty!!");
    }
}

void isempty()
{
    if(top==-1)
    {
        printf("The Stack Is Empty");
    }
    else
    {
        printf("The Stack Is Not Empty");
    }
}


void main()
{

int ch;
while(1)
{
    printf("\n1)Push\n2)Pop\n3)Display\n4)Peek\n5)IsFull\n6)IsEmpty\n7)Exit\nEnter Your Choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :push();
        break;
        case 2 :pop();
        break;
        case 3 :display();
        break;
        case 4 :peek();
        break;
        case 5 :isfull();
        break;
        case 6 :isempty();
        break;
        case 7 :exit(0);
        break;
        default: printf("You Entered An Invalid Choice");
        break;
    }
}
}
