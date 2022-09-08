#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} node;

node *top = NULL;

void print()
{
    node *ptr = top;
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

void push(int x)
{

    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = top;
    top = temp;
    print();
}

void pop()
{
    node *temp = top;
    if (top == NULL)
        return;
    top = top->next;
    free(temp);
    printf("After popping,\n");
    print();
}

int main()
{
    printf("(20407) ANSARI MOHD MUDASSIR MOHD IMRAN\n");
    int n, x;
    printf("No. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements into the stack: ", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        push(x);
    }
    pop();
    return 0;
}