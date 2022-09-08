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
    node *ptr;
    ptr = start;
    printf("%d ", ptr->data);
    ptr = ptr->next;
    while (ptr != start)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_begin(node **start)
{
    int num;
    printf("Enter the number you want to insert at the beginning: ");
    scanf("%d", &num);
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = num;

    node *p;
    p = *start;
    while (p->next != *start)
    {
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list

    p->next = ptr;
    ptr->next = *start;
    *start = ptr;

    traversal(*start);
}

void insert_end(node **start)
{
    int num;
    printf("Enter the number you want to insert at the end: ");
    scanf("%d", &num);

    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = num;
    ptr->next = *start;

    node *p;
    p = *start;

    while (p->next != *start)
    {
        p = p->next;
    }
    ptr->next = p;
    p->next = *start;
    *start = ptr;

    traversal(*start);
}

node *addEnd(node *last, int data)
{
    // Creating a node dynamically.
    node *temp =
        (node *)malloc(sizeof(node));

    // Assigning the data.
    temp->data = data;

    // Adjusting the links.
    temp->next = last->next;
    last->next = temp;
    last = temp;

    return last;
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

    // printf("\n\nChoose any one from below:\n1) Insert at the beginning\n2) Insertion at the end\n3) Insertion in the middle\n");

    // printf("Your choice: ");
    // scanf("%d", &opt);

    // switch (opt)
    // {
    // case 1:
    //     insert_begin(&start);
    //     break;

    // case 2:
    //     insert_end(&start);
    //     break;

    // case 3:
    //     insert_mid(&start);
    //     break;

    // default:
    //     printf("Invalid choice!\n");
    //     break;
    // }

    // insert_begin(&start);
    insert_end(&start);

    return 0;
}