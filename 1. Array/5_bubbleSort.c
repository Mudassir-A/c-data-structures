#include <stdio.h>

void bubbleSort(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted elements are: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);
    return 0;
}