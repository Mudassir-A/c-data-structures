// Insertion of a node in the linked list

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// structure of the node
typedef struct linked_list
{
    int data;
    struct linked_list *next;
} node;

// traversal of thelinked list
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

// insert at the beginning
void insert_begin(node **temp)
{
    node *ptr;
    int s;

    printf("\nEnter the number you want to insert at the beginning: ");
    scanf("%d", &s);

    ptr = (node *)malloc(sizeof(node));
    ptr->data = s;

    if (*temp == NULL)
        ptr->next = NULL;

    else
        ptr->next = *temp;

    *temp = ptr;
    traversal(*temp);
}

// insert at the end
void insert_end(node **temp)
{
    int s;
    node *ptr, *loc;

    printf("\nEnter the number you want to insert at the end: ");
    scanf("%d", &s);

    ptr = (node *)malloc(sizeof(node));
    ptr->data = s;
    ptr->next = NULL;

    if (*temp == NULL)
    {
        *temp = ptr; // ptr become first node
        return;
    }

    loc = *temp;

    while (loc->next != NULL) // to reach to last node of link list
        loc = loc->next;

    loc->next = ptr;
    traversal(*temp);
}

// insert at the middle
void insert_mid(node **temp)
{
    int s, index, i = 1;

    printf("\nEnter the number you want to insert in the middle: ");
    scanf("%d", &s);
    printf("Enter the index number: ");
    scanf("%d", &index);

    node *ptr, *loc;

    ptr = (node *)malloc(sizeof(node));
    ptr->data = s;

    if (*temp == NULL)
    {
        ptr->next = NULL;
        *temp = ptr;
        return;
    }

    loc = *temp;

    while (i < index - 1)
    {
        loc = loc->next;
        if (loc == NULL)
        {
            printf("Link list size exceed!");
            return;
        }
        i++;
    }

    ptr->next = loc->next;
    loc->next = ptr;

    traversal(*temp);
}

int main()
{
    node *start, *ptr, *temp;
    int i, n, s, index, num, opt;

    printf("Enter the total no. of elements: ");
    scanf("%d", &n);

    printf("Enter the first node: ");
    scanf("%d", &num);

    start = (node *)malloc(sizeof(node));
    start->data = num;
    start->next = NULL;

    temp = start;
    printf("Enter the remaining %d nodes: ", (n - 1));
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

    printf("\n\nChoose any one from below:\n1) Insert at the beginning\n2) Insertion at the end\n3) Insertion in the middle\n");

    printf("Your choice: ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        insert_begin(&start);
        break;

    case 2:
        insert_end(&start);
        break;

    case 3:
        insert_mid(&start);
        break;

    default:
        printf("Invalid choice!\n");
        break;
    }

    return 0;
}