#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front = -1, rear = -1;

void enqueue()
{
    if (rear == 4)
    {
        printf("Queue is full!!\n");
    }
    else
    {
        int value;
        printf("Enter the element to enqueue: ");
        scanf("%d", &value);

        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;

        printf("Value %d has been inserted.\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        printf("Removed element is %d\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1; // reset when queue becomes empty
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is empty!!\n");
    }
    else
    {
        printf("Front element is %d\n", queue[front]);
    }
}

void isfull()
{
    if (rear == 4)
    {
        printf("Queue is full.\n");
    }
    else
    {
        printf("Queue is not full.\n");
    }
}

void isempty()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue is not empty.\n");
    }
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n--- Queue Menu ---\n");
        printf("1) Enqueue\n2) Dequeue\n3) Display\n4) Peek\n5) Is Full\n6) Is Empty\n7) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            isfull();
            break;
        case 6:
            isempty();
            break;
        case 7:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
