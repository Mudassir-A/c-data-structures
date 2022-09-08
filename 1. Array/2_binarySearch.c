#include <stdio.h>

void binarySearch(int array[], int search, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int middle = (low + high) / 2;

        if (array[middle] == search)
        {
            printf("%d found at location %d\n", search, middle);
            break;
        }

        else if (array[middle] < search)
        {
            low = middle + 1;
        }

        else
        {
            high = middle - 1;
        }
    }

    if (low > high)
    {
        printf("Not found! %d is not present in the list\n", search);
    }
}

void main()
{
    int array[100];

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    int search;
    printf("Enter the value to find: ");
    scanf("%d", &search);

    // Function call
    binarySearch(array, search, n);
}