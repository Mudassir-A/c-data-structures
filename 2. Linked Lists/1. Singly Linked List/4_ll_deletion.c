// Deletion of a node in the linked list

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

// Case 1: Deleting the first node from the linked list
void delete_first(node **head)
{
    node *ptr;
    ptr = *head;
    *head = ptr->next;
    free(ptr);
}

// Case 2: Deleting the last node from the linked list
void delete_last(node **head)
{
    node *ptr, *q;
    ptr = *head;
    while (ptr->next != NULL)
    {
        q = ptr;
        ptr = ptr->next;
    }
    q->next = NULL;
    free(ptr);
}

// Case 3: Deleting the node with a given value from the linked list
void deletion_mid(node **temp)
{
    node *loc, *prev;
    int x;

    printf("Enter the number you want to delete: ");
    scanf("%d", &x);

    loc = *temp;
    while (loc != NULL)
    {
        if (loc->data == x)
        {
            prev->next = loc->next;
            free(loc);
            printf("\nAfter deleting the node of your choice,\n");
            return;
        }
        prev = loc;
        loc = loc->next;
    }
    printf("Number not present!");
}

int main()
{
    node *start, *ptr, *temp;
    int i, n, s, num, opt;

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

    traversal(ptr);

    printf("\n\nChoose any one from below:\n1) Deleting the first node from the linked list\n2) Deleting the last node from the linked list\n3) Deleting the node with a given value from the linked list\n");

    printf("Your choice: ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        delete_first(&start);
        ptr = start;
        printf("\nAfter deleting the first node,\n");
        traversal(ptr);
        break;

    case 2:
        delete_last(&start);
        printf("\nAfter deleting the last node,\n");
        traversal(ptr);
        break;

    case 3:
        deletion_mid(&start);
        traversal(ptr);
        break;

    default:
        printf("Invalid choice!\n");
        break;
    }

    return 0;
}