#include <stdio.h>

void main()
{
    // variable declearation
    int i, j, key;
    int arr[] = {44, 33, 55, 22, 11};

    // Unsorting array printing
    printf("Array before sorting: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // logic of insertion sort
    for (i = 1; i < 5; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // print the sorting value
    printf("\nAfter sorting, Insertion sort in Assending order: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAfter sorting, Insertion sort in Dessending order: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}