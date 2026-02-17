#include <stdio.h>

int main()
{
    int arr[] = {23, 45, 2, 87, 19};
    int N = 5; // size of array.
    int i, j, min, temp;

    printf("Original Array:\t");
    for (int k = 0; k < N; k++)
    {
        printf("%d ", arr[k]);
    }

    for (i = 0; i < N - 1; i++)
    {
        min = i; // Assumes the first value as the minimum value.
        for (j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j; // updates the minimum value.
            }
        }
        // swaping the found minimum element with the first element
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("\nSorted Array:\t");
    for (int k = 0; k < N; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
