#include<stdio.h>

#define MAX 5

int queue[MAX] = {10, 20, 30};
int front = 0;
int rear = 2;

// Dequeue Operation
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted from queue\n", queue[front]);
        front++;
    }
}

// Display Queue
void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    display();

    dequeue();

    display();

    return 0;
}