#include <stdio.h>

int search(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

void main()
{
    int i, j, n, result, key;
    int array[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("Enter the key: ");
    scanf("%d", &key);

    result = search(array, n, key);

    if (result == -1)
        printf("The given key element is not present in array\n");

    else
        printf("The given key elememnt is present at index %d\n", result);
}
