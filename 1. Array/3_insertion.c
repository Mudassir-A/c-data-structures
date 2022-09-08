#include <stdio.h>
#define MAX 10

void insertion(int a[], int n)
{
    int num;
    printf("Enter the number you want to insert: ");
    scanf("%d", &num);

    int index;
    printf("Enter the index number: ");
    scanf("%d", &index);

    for (int i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = num;
    n = n + 1;

    printf("The elements of the array after insertion are:\n");

    for (int j = 0; j < n; j++)
    {
        printf("a[%d] = %d\n", j, a[j]);
    }
}

int main()
{
    int n;
    printf("Enter the total no. of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of the array are:\n");
    for (int k = 0; k < n; k++)
    {
        printf("a[%d] = %d\n", k, a[k]);
    }

    insertion(a, n);

    return 0;
}