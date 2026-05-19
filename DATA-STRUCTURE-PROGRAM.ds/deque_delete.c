#include <stdio.h>

#define MAX 5

int deque[MAX] = {2, 5, 10, 20};
int front = 0;
int rear = 3;

// Delete from Front
void deleteFront()
{
    if (front == -1)
    {
        printf("Deque Underflow\n");
    }
    else
    {
        printf("%d deleted from front\n", deque[front]);

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == MAX - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}

// Delete from Rear
void deleteRear()
{
    if (front == -1)
    {
        printf("Deque Underflow\n");
    }
    else
    {
        printf("%d deleted from rear\n", deque[rear]);

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = MAX - 1;
        }
        else
        {
            rear--;
        }
    }
}

// Display Deque
void display()
{
    int i;

    if (front == -1)
    {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deque elements are: ");

    i = front;

    while (i != rear)
    {
        printf("%d ", deque[i]);
        i = (i + 1) % MAX;
    }

    printf("%d\n", deque[rear]);
}

int main()
{
    display();

    deleteFront();
    deleteRear();

    display();

    return 0;
}