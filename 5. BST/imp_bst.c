#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct BstNode
{
    int data;
    struct BstNode *left;
    struct BstNode *right;
} node;

node *GetNewNode(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

node *Insert(node *root, int data)
{
    if (root == NULL)
        root = GetNewNode(data);
    else if (data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);
    return root;
}

bool Search(node *root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}

int main()
{
    node *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    int num;
    printf("Enter number be searched: ");
    scanf("%d", &num);
    if (Search(root, num) == true)
        printf("Found!\n");
    else
        printf("Not Found!\n");
    return 0;
}