#include <stdio.h>
#define MAX 10

void deletion(int a[], int n)
{
    int index;
    printf("Enter the index number of which the element you want to delete: ");
    scanf("%d", &index);

    for (int j = index; j < n - 1; j++)
    {
        a[j] = a[j + 1];
    }
    n = n - 1;

    printf("The elements of the array after deletion are:\n");

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

    deletion(a, n);

    return 0;
}