#include <stdio.h>
#include <stdlib.h>

typedef struct link_list
{
    int data;
    struct link_list *next;
} node;

node *front = NULL, *rear = NULL;

void printq()
{
    node *ptr = front;
    printf("Queue: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert(int no)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = no;
    ptr->next = NULL;
    if (front == NULL)
        front = ptr;
    else
        rear->next = ptr;
    rear = ptr;
    printq();
}

void delete()
{
    node *ptr;
    if (front == NULL)
    {
        printf("Error: Queue UnderFlow!\n");
        return;
    }
    ptr = front;
    int i = ptr->data;
    if (front == rear)
    {
        front = rear = NULL;
    }
    else
        front = front->next;
    free(ptr);
    printf("Deleted element = %d", i);
}

int main()
{
    printf("(20407) ANSARI MOHD MUDASSIR MOHD IMRAN\n");
    insert(10);
    insert(20);
    return 0;
}