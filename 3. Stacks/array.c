#include <stdio.h>
#define max 10
int a[max];
int top = -1;

void print()
{
    int i;
    printf("Stack: ");
    for (i = top; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
}

void push(int x)
{
    if (top == max - 1)
    {
        printf("Error: stack overflow\n");
        return;
    }
    a[++top] = x;
    print();
}

void pop()
{
    if (top == -1)
    {
        printf("Error: No element to pop\n");
        return;
    }
    top--;
    printf("After popping,\n");
    print();
}

int main()
{
    printf("(20407) ANSARI MOHD MUDASSIR MOHD IMRAN\n");
    int n, x;
    printf("No. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push(x);
    }
    pop();

    return 0;
}