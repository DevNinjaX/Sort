#include <stdio.h>

void main()
{
    // variable declearation
    int i, j, k;
    int arr[] = {44, 33, 55, 22, 11};

    // Unsorting array printing
    printf("Array before sorting: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // selection sort logic
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                // swapping values
                arr[i] = ((arr[i] + arr[j]) - (arr[j] = arr[i]));
            }
            printf("\n");
            for (k = 0; k < 5; k++)
            {
                printf("%d ", arr[k]);
            }
        }
        printf("\n\n");
    }

    // print the sorting value
    printf("\nAfter sorting, Selection sort in Assending order: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAfter sorting, Selection sort in Dessending order: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}