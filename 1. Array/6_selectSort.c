// PROGRAM TO SELECTION SORT THE GIVEN NUMBERS

#include <stdio.h>

void selectSort(int a[], int n)
{
    int min, index;
    for (int i = 0; i < n - 1; i++)
    {
        min = a[i];
        index = i;
        for (int j = i; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                index = j;
            }
        }
        a[index] = a[i];
        a[i] = min;
    }

    printf("Sorted elements are: ");
    for (int k = 0; k < n; k++)
        {
        printf("%d ", a[k]);
    }
}

void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selectSort(a, n);
}