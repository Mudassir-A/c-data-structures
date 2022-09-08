// Implementation of stack using Arrays

#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} node;

node *start = NULL;

void display()
{
    node *ptr = start;
    printf("Stack: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    if (ptr = NULL)
    {
        printf("Error: Stack is empty\n");
        return;
    }
}

void pop()
{
    node *ptr = start;
    if (start == NULL)
    {
        printf("Error: Stack Underflow\n");
        return;
    }
    int i = ptr->data;
    start = ptr->next;
    printf("\nPopped element is %d\n", i);
    free(ptr);
}

void push(int num)
{
    // node *ptr = (node *)malloc(sizeof(node));
    // ptr->data = num;
    // if (start == NULL)
    //     ptr->next = NULL;
    // else
    //     ptr->next = start;
    // start = ptr; //making newly inserted node as 1st node
    // print();

    node *temp = (node *)malloc(sizeof(node));
    temp->data = num;
    temp->next = start;
    start = temp;
}

int main()
{
    start = (node *)malloc(sizeof(node));
    push(30);
    push(12);
    push(10);
    push(30);
    push(40);
    display();
    return 0;
}
