// Searching a Node in Linked Lists

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
}

void search(node *ptr, int no)
{
    printf("\nEnter the number you want to search: ");
    scanf("%d", &no);

    while (ptr != NULL)
    {
        if (no == ptr->data)
        {
            printf("The number is present!");
            return;
        }

        else
            ptr = ptr->next;
    }
}

int main()
{
    node *start, *ptr, *temp;
    int i, n, num, no;

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

    search(ptr, no);

    return 0;
}