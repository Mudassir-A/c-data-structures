// Introduction to Linked Lists (Traversing the linked Lists)

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
    printf("The Linked List elements are: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void findSmallest(node *start)
{
    node *ptr, *temp;
    ptr = start;
    temp = ptr;
    while (ptr != NULL)
    {
        if (temp->data > ptr->data)
        {
            temp = ptr;
        }
        ptr = ptr->next;
    }
    printf("Smallest node is %d\n", temp->data);
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

    traversal(start);
    findSmallest(start);

    return 0;
}