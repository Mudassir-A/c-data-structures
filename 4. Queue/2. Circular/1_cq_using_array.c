#include <stdio.h>
#define max 10

int front = -1, rear = -1, a[max];

void display()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty!\n");
    else
    {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}

void enqueue(int num)
{
    if (front == 0 && rear == max - 1)
        printf("Error: Queue Overflow!\n");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        a[rear] = num;
    }
    else
    {
        rear++;
        a[rear] = num;
    }
    display();
}

void dequeue()
{
    int val;
    if (front == -1 && rear == -1)
        printf("Error: Queue Underflow!\n");
    if (front == rear)
        front = rear = -1;
    else
    {
        if (front == max - 1)
            front = 0;

        else
            front++;
    }
    printf("After deletion,\n");
    display();
}

void main()
{
    printf("(20407) ANSARI MOHD MUDASSIR MOHD IMRAN\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    enqueue(50);
}