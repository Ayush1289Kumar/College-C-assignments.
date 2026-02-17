#include <stdio.h>

int main()
{
    int arr[5] = {2, 8, 17, 29, 56};
    int N = 5; // size of array
    int first, last, mid, target;
    int found = 0;

    printf("Enter the number you want to find: ");
    scanf("%d", &target);

    // Set search boundaries
    first = 0;
    last = N - 1;

    while (first <= last)
    { // Calculate mid value
        mid = first + (last - first) / 2;

        if (arr[mid] == target)
        { // target found
            printf("%d found at position %d", target, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < target)
            // target is in the right half
            first = mid + 1;
        else
            // target is in the left half
            last = mid - 1;
    }
    // if target not found.
    if (!found)
        printf("Not Found: %d is not in the list.\n", target);

    return 0;
}