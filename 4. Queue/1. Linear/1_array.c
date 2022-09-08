#include <stdio.h>
#define max 10

int front = -1, rear = -1, a[max];

void printq()
{
    printf("Queue: ");
    if (front == -1)
    {
        printf("Error: Queue is empty!\n");
        return;
    }

    for (int i = front - 1; i < rear; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void insertq()
{
    int num, n;
    printf("No. of elements: ");
    scanf("%d", &n);

    if (rear == n - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }

    else
    {
        if (front == -1)
        {
            front = 0;
            printf("Enter the elements: ");
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &num);
                a[rear] = num;
                rear++;
            }
        }
    }
    printq();
}

void deleteq()
{
    if (front == -1)
    {
        printf("Empty");
        return;
    }
    int i = a[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front++;
    printf("Deleted element = %d", i);
}

void main()
{
    printf("(20407) ANSARI MOHD MUDASSIR MOHD IMRAN\n");
    insertq();
}