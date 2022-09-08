#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} node;

void traversal(node *start)
{
    node *ptr = start;
    printf("%d ", ptr->data);
    ptr = ptr->next;
    while (ptr != start)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int num, n;
    node *start, *temp, *ptr;

    start = (node *)malloc(sizeof(node));
    printf("Enter the no. of nodes: ");
    scanf("%d", &n);

    printf("Enter the first node: ");
    scanf("%d", &num);

    start->data = num;
    start->next = start;

    printf("Enter the remaining %d nodes: ", (n - 1));
    temp = start;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &num);
        ptr = (node *)malloc(sizeof(node));
        ptr->data = num;
        temp->next = ptr;
        ptr->next = start;
        temp = ptr;
    }

    traversal(start);

    return 0;
}