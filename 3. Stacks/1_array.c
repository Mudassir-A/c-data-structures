
#include <stdio.h>
#define max 4

void print(int a[])
{
    for (int i = max - 1; i >= 0; i--)
        printf("%d ", a[i]);
    printf("\n");
}

void push(int a[], int *top, int num)
{
    if (*top == max - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    *top++;
    a[*top] = num;
}

void pop(int a[], int *top)
{
    if (*top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }
    int i = a[*top];
    *top--;
    printf("Popped elements is: %d\n", i);
}

int main()
{
    int a[max], num, top = -1, i;

    printf("Enter 4 elements of stack: ");
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &a[i]);
        push(a, &top, num);
        top++;
    }
    printf("After push, stack elements are: ");
    print(a);

    pop(a, &top);
    printf("After pop, stack elements are: ");
    print(a);
    return 0;
}