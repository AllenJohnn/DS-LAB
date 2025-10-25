#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
int value;

void enqueue()
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("Queue Overflow!!\n");
    }
    else
    {
        printf("Enter The Element To Insert: ");
        scanf("%d", &value);

        if (front == -1)
            front = rear = 0;
        else if (rear == SIZE - 1)
            rear = 0; // wrap around
        else
            rear++;

        queue[rear] = value;
        printf("%d Has Been Inserted Into The Queue\n", value);
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow!!\n");
    }
    else
    {
        printf("%d Has Been Removed From The Queue\n", queue[front]);

        if (front == rear)
        {
            // Queue becomes empty
            front = rear = -1;
        }
        else if (front == SIZE - 1)
        {
            front = 0; // wrap around
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
        printf("Queue Is Empty!!\n");
    }
    else
    {
        printf("Queue Elements Are: ");
        int i = front;
        while (1)
        {
            printf("%d ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % SIZE; // move circularly
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1)
        printf("Queue Is Empty!!\n");
    else
        printf("Front Element Is: %d\n", queue[front]);
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n----- Circular Queue Menu -----\n");
        printf("1) Enqueue\n2) Dequeue\n3) Display\n4) Peek\n5) Exit\n");
        printf("Enter Your Choice: ");
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
            printf("Exiting Program...\n");
            exit(0);
        default:
            printf("Invalid Choice!!\n");
        }
    }

    return 0;
}
