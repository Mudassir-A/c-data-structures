// Count the no. of nodes in the Linked Lists

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} node;

void traversal(node *start)
{
    node *ptr = start;
    printf("The Linked List elements are: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void count_nodes(node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("The total no. of nodes in the linked list are: %d\n", count);
}

int main()
{
    node *start, *ptr, *temp;
    int i, n, num;

    printf("Enter the total no. of elements: ");
    scanf("%d", &n);

    printf("Enter the first node: ");
    scanf("%d", &num);

    start = (node *)malloc(sizeof(node));
    start->data = num;
    start->next = NULL;

    printf("Enter the remaining %d nodes: ", (n - 1));
    temp = start;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &num);
        ptr = (node *)malloc(sizeof(node));
        ptr->data = num;
        ptr->next = NULL;
        temp->next = ptr;
        temp = ptr;
    }

    ptr = start;

    traversal(start);
    count_nodes(start);

    return 0;
}