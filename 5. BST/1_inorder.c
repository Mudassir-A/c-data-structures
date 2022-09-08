#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left, *right;
} node;

void inorder(node *root);
void btree(int a[], int n);

void main()
{
    int a[10], n, i;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    btree(a, n);
}

node *create_tree(int a[], int n)
{
    node *p, *prev, *ptr, *root;
    int flag, i;
    root = (node *)malloc(sizeof(node));
    root->data = a[0];
    root->left = root->right = NULL;
    for (i = 1; i < n; i++)
    {
        ptr = (node *)malloc(sizeof(node));
        ptr->data = a[i];
        ptr->left = ptr->right = NULL;
        p = root;
        while (p != NULL)
        {
            prev = p;
            if (a[i] < p->data)
            {
                p = p->left;
                flag = 1;
            } // go to left side
            else
            {
                p = p->right;
                flag = 0;
            }
        }
        if (flag == 1) // if flag =1 means , left child
            prev->left = ptr;
        else
            prev->right = ptr;
    }
    return (root);
}

void btree(int a[], int n)
{
    node *root;
    root = create_tree(a, n);
    printf("Elements of the tree:\n");
    inorder(root);
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}