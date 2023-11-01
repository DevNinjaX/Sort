#include <stdio.h>

void main()
{
    // variable declearation
    int i, j;
    int arr[] = {7, 2, 9, 6, 4};

    // Unsorting array printing
    printf("Array before sorting: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // bubble sort logic
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swapping values
                arr[j] = ((arr[j] + arr[j + 1]) - (arr[j + 1] = arr[j]));
            }
        }
    }

    // print the sorting value
    printf("\nAfter sorting, Bubble sort in Assending order: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAfter sorting, Bubble sort in Dessending order: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}